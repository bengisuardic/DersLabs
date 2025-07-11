#include <iostream>

using namespace std;

int recursiveLSearch(int arr[], int size, int i, int key){
	if(i >= size){
		return -1;
	}
	if(arr[i] == key){
		return i;
	}
	return recursiveLSearch(arr, size, i + 1, key); 
}
int main(){
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
	int key = 10;
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int result = recursiveLSearch(arr, size, 0, key);
	
	if(result != -1){
		cout<<"Key has found in index: "<<result<<endl;
	}
	else{
		cout<<"Key has not found in the array."<<endl;
	}
	return 0;
}

