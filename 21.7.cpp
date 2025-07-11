#include <iostream>
#include <string>

using namespace std;

string rot13(const string &text){
	string result = text;
  for (int i = 0; i < result.size(); ++i) {
        char &ch = result[i];  // Karaktere referansla eriþim
        if (isalpha(ch)) {     // Harf olup olmadýðýnýn kontrolü
            if (islower(ch)) {
                ch = 'a' + (ch - 'a' + 13) % 26;
            } else if (isupper(ch)) {
                ch = 'A' + (ch - 'A' + 13) % 26;
            }
        }
    }
    return result;
}
int main(){
	string msg;
	cout << "Enter a message: ";
	
    getline(cin, msg);

    string encrypted = rot13(msg);
    cout << "Encrypted message: " << encrypted << endl;

    string decrypted = rot13(encrypted);
    cout << "Decrypted message: " << decrypted << endl;

    return 0;	
	
}
