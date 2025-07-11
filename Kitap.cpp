#include "Kitap.h"
#include <iostream>
#include <cstring>
using namespace std;
 Kitap::Kitap()
{
       
}

       Kitap::Kitap(char *a,char *y,char* t,int x)
       {
       	
       	strcpy(ad,a);
       	strcpy(yazar,y);
       	strcpy(tur,t);
       	adet=x;
       	
       	for(int i=0;i<6;i++)
       	{
       		 for(int j=0;j<5;j++)
       		{
       		   nakliyeler[i][j]=0;
		    }
		}
	   }
		 void Kitap::bilgiVer()
		 {
		 	cout<<"Ad: "<<ad<<endl;
		 	cout<<"Yazar: "<<this->yazar<<endl;
		 	cout<<"Tur: "<<(*this).tur<<endl;
		 
		 	cout<<"Fiyat: "<<fiyat<<endl;
		 	cout<<"Sayfa: "<<sayfa<<endl;
		 	cout<<"Adet: "<<adet<<endl;
		 
		 }
		void Kitap::sayfaDuzelt(int x)
		 {
		 	sayfa=x;
		 }
		void Kitap::fiyatDuzelt(double x)
		 {
		 	fiyat=x;
		 }
		void Kitap::zamYap(double oran)
		 {
		 	fiyat=fiyat+fiyat*oran;
		 }
		int Kitap::adetArttir(int x)
		 {
		 	adet=adet+x;
		 	return adet;
		 }
		int Kitap::adetAzalt(int x)
		 {
		 	adet=adet-x;
		 	return adet;
		 }
		 bool Kitap::ayniMi(Kitap k)
		 {
		 	if(strcmp(k.ad,ad)==0 &&  strcmp(k.yazar,yazar)==0)
		 	return true;
		 	else 
		 	return false;
		 }
		  void Kitap::ekle(Kitap k)
		  {
		  	adet=adet+k.adet;
		  }
		 void Kitap::turDegistir(char *t)
		 {
		 	strcpy(tur,t);
		 }
		 void Kitap::nakliyeGuncelle(int x,int y,int miktar)
		 {
		 	nakliyeler[x][y]=miktar;
		 }
		 void Kitap::takvimGoster()
		 {
		 		cout<<"    Pz     "<<" Sl        "<<"Cr         "<<"Pr     "<<"Cm      "<<endl;
       	for(int i=0;i<6;i++)
       	{
       		 for(int j=0;j<5;j++)
       		{
       		   cout<<"    "<<nakliyeler[i][j]<<"    ";
		    }
		    cout<<endl;
		}
	}
	void Kitap::isimYaz(int k) const
	{
		cout<<"İsim: "<<ad;
		//sayfa=k;   //HATA alırız çünkü fonksiyon const!!!
	}
	Kitap Kitap::tercihEdilen(Kitap k)
	{
		if(k.fiyat<(*this).fiyat)  //fiyat veya this->fiyat da olur
		return k;
		else
		return *this;
			
	}
	
	
	
	
	
	
	
