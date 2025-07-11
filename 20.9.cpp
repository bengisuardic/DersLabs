#include <iostream>

using namespace std;

int recursiveBSearch(int arr[], int key, int begin, int end){
	if(begin > end){
		return -1;
	}
	int mid = end + (begin-end)/2; // Calculate the middle position
	if(arr[mid] == key){
		return mid;
	}
	if(arr[mid] > key){
		 return recursiveBSearch(arr, key, begin, mid - 1);
	}
	else{
		return recursiveBSearch(arr, key, mid+1, end);
	}
}
int main(){
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
	int key = 10;
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int result = recursiveBSearch(arr, key, 0, size - 1);
	
	if(result != -1){
		cout<<"Key has found in index: "<<result<<endl;
	}
	else{
		cout<<"Key has not found in the array."<<endl;
	}
	return 0;
}

