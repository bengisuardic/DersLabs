#include <iostream>
#include <string>

using namespace std;

string eraseSubstring(string text, const string &toErase){
	size_t pos;
	while((pos = text.find(toErase)) != string::npos){
		text.erase(pos, toErase.length());
	}
	return text;
}
int main(){
	string input;
    cout << "Enter a string: ";
    getline(cin, input);

    input = eraseSubstring(input, "by");
    input = eraseSubstring(input, "BY");

    cout << "Modified string: " << input << endl;

    return 0;
}
