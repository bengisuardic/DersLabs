#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool endsWithRorAy(const string &word) {
    int len = word.size();
    return (len >= 1 && word[len - 1] == 'r') ||
           (len >= 2 && word.substr(len - 2) == "ay");
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    istringstream stream(text);
    string word;
    while (stream >> word) {
        if (endsWithRorAy(word)) {
            cout << word << endl;
        }
    }

    return 0;
}

