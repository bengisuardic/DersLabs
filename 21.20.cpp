#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a line of text: ";
    getline(cin, text);

    string reversed;
    for (int i = text.size() - 1; i >= 0; --i) {
        reversed += text[i];
    }

    cout << "Reversed text: " << reversed << endl;

    return 0;
}

