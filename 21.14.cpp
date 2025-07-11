#include <iostream>
#include <string>

using namespace std;

string createCryptogram(const string &text){
		string result = text;
  for (int i = 0; i < result.size(); ++i) {
        char &ch = result[i];  // Karaktere referansla eri�im
        if (isalpha(ch)) {     // Harf olup olmad���n�n kontrol�
            if (islower(ch)) {
                ch = 'a' + (ch - 'a' + 5) % 26; // Soruda 't' ile 'x' aras�nda be� karakter vard�r.
                result[i] = toupper(ch);
            } else if (isupper(ch)) {
                ch = 'A' + (ch - 'A' + 5) % 26;
                result[i] = tolower(ch);
            }
        }
    }
    
    return result;
}
int main(){
	string msg;
    cout << "Enter a message: ";
    getline(cin, msg);
    
    string cryptogram = createCryptogram(msg);
    cout << "Cryptogram: " << cryptogram << endl;

    return 0;
}
