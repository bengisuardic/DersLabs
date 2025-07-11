#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int min_digit(int n) {
    int min = 9;
    while (n > 0) {
        int digit = n % 10;
        if (digit < min)
            min = digit;
        n /= 10;
    }
    return min;
}

int max_digit(int n) {
    int max = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > max)
            max = digit;
        n /= 10;
    }
    return max;
}

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    pid_t pid[3];

    for (int i = 0; i < 3; i++) {
        pid[i] = fork();
        if (pid[i] == 0) {
            int result;
            switch (i) {
                case 0:
                    result = min_digit(num);
                    break;
                case 1:
                    result = max_digit(num);
                    break;
                case 2:
                    result = sum_digits(num);
                    break;
                default:
                    exit(EXIT_FAILURE);
            }
            printf("Result found by Child with PID-%d = %d\n", getpid(), result);
            exit(result);
        } else if (pid[i] < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i < 3; i++) {
        int status;
        waitpid(pid[i], &status, 0);
        if (WIFEXITED(status)) {
            // Child exited normally
            printf("Child with PID-%d exited with status code %d\n", pid[i], WEXITSTATUS(status));
        } else {
            printf("Child with PID-%d did not exit normally\n", pid[i]);
        }
    }

    return 0;
}
