#include <iostream>
using namespace std;

void deneyimliAcemiAyirarakYaz(int sicil[], int memurSayisi);
int main(){
	
	int memurSayisi;
	cout<<"Memur sayisini giriniz: ";
	cin>>memurSayisi;
	
	int sicil[30];
	cout<<memurSayisi<<"adet memurun sicil numaralarini giriniz: ";
	for(int i=0;i<memurSayisi;i++)
	cin>>sicil[i];
	
	deneyimliAcemiAyirarakYaz(sicil, memurSayisi);
	
	return 0;
	
}
void deneyimliAcemiAyirarakYaz(int sicil[], int memurSayisi){
	
	cout<<"Acemi memurlarin sicil numaralari: ";
	for(int i = 0;i<memurSayisi;i++){
	 if(sicil[i] % 2 == 0)
	 cout<<sicil[i]<< "";
	 
	}
	cout<<"\nDeneyimli memurlarin sicil numaralari: ";
	for(int i=0;i<memurSayisi;i++){
		if(sicil[i] % 2 != 0)
		cout<<sicil[i]<<"";
	}
	
	cout<<"\nNobet Listeleri:\n";
	for(int i=0;i<memurSayisi;i++){
		if(sicil[i]%2!=0){
			for(int j=0;j<memurSayisi;j++){
				if(sicil[j]%2==0){
					cout<<sicil[i]<<"-"<<sicil[j]<<"\n";
				}
			}
		}
	}
}
