#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	cout << "Enter a string: ";
	getline(cin, input);
	
	string backwards;
	for(int i=input.size();i >= 0; --i){
		char ch = input[i];
		if(isupper(ch)){
			backwards += tolower(ch);
		}
		else if (islower(ch)){
			backwards += toupper(ch);
		}
		else{
			backwards += ch;
		}
	}
	cout << "Backwards version of the string: "<< backwards << endl;
	
	return 0;
}
