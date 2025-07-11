#include <stdio.h>

#define FACTORIES 3
#define WAREHOUSES 3

void printMatrix(int matrix[FACTORIES][WAREHOUSES]) {
    printf("Transportation Problem\n");
    int i, j;
    int cost[FACTORIES][WAREHOUSES] = {
        {5, 7, 8},
        {6, 4, 7},
        {9, 8, 10}
    };
    int supplies[FACTORIES] = {100, 150, 200};
    int demands[WAREHOUSES] = {120, 100, 80};

    printf("Cost Matrix: \n");
    for (i = 0; i < FACTORIES; i++) {
        for (j = 0; j < WAREHOUSES; j++) {
            printf("%dx%d\t", cost[i][j], i + 1 * 10 + j + 1);
        }
        printf("\n");
    }

    printf("\nSupplies:\n");
    for (i = 0; i < FACTORIES; i++) {
        printf("%d\t", supplies[i]);
    }

    printf("\nDemand:\n");
    for (i = 0; i < WAREHOUSES; i++) {
        printf("%d\t", demands[i]);
    }

    printf("\nDecision Variables:\n");
    for (i = 0; i < FACTORIES; i++) {
        for (j = 0; j < WAREHOUSES; j++) {
            printf("%dx%d", cost[i][j], i + 1 * 10 + j + 1);
            if (j != WAREHOUSES - 1)
                printf(" + ");
        }
        printf("= %d\n", supplies[i]);
    }

    printf("\nConstraints: \n");
    for (i = 0; i < FACTORIES; i++) {
        printf("Supply Constraint for Factory %d: ", i + 1);
        for (j = 0; j < WAREHOUSES; j++) {
            printf("%dx%d", cost[i][j], i + 1 * 10 + j + 1);
            if (j != WAREHOUSES - 1)
                printf(" + ");
        }
        printf("= %d\n", supplies[i]);
    }

    for (i = 0; i < WAREHOUSES; i++) {
        printf("Demand Constraint for Warehouse %d: ", i + 1);
        for (j = 0; j < FACTORIES; j++) {
            printf("%dx%d", cost[j][i], j + 1 * 10 + i + 1);
            if (j != FACTORIES - 1)
                printf(" + ");
        }
        printf("= %d\n", demands[i]);
    }

    printf("\nObjective Function: ");
    printf("*Z = ");
    for (i = 0; i < FACTORIES; i++) {
        for (j = 0; j < WAREHOUSES; j++) {
            printf("%dx%d", cost[i][j], i + 1 * 10 + j + 1);
            if (j != WAREHOUSES - 1 || i != FACTORIES - 1)
                printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int cost[FACTORIES][WAREHOUSES] = {
        {5, 7, 8},
        {6, 4, 7},
        {9, 8, 10}
    };
    printMatrix(cost);

    return 0;
}

