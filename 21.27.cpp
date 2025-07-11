#include <iostream>
#include <string>
using namespace std;

int main() {
    string spamWords[] = {"free", "win", "winner", "cash", "prize", "offer", "bonus"};
    string message;
    int spamScore = 0;

    cout << "Enter a message: ";
    getline(cin, message);

    for (int i = 0; i < 7; i++) {
        size_t pos = message.find(spamWords[i]);
        while (pos != string::npos) {
            spamScore++;
            pos = message.find(spamWords[i], pos + spamWords[i].length());
        }
    }

    cout << "Spam score: " << spamScore << endl;

    return 0;
}


