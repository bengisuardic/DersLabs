#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Oyun{
	private:
		int sayi;
	public:
	 Oyun();
     int tahminSayisi;
     bool bildiMi_buyukMu_kucukMu(int sayi); 	
};
int main()
{
   Oyun m;
   bool r;
   int sayi;
   cout << "Tuttugum 3 basamakli sayiyi tahmin ediniz"<<endl;
   do{
      cout << "Tahmininizi girin:";
      cin >> sayi;
	  r = m.bildiMi_buyukMu_kucukMu(sayi);
	  m.tahminSayisi++;
	}
	while(r != true);
	
	return 0;
}
bool Oyun::bildiMi_buyukMu_kucukMu(int x){
	int random;
    srand(time(NULL));
    random = 100 + rand()%1;
	if(x < random){
		cout<<"Tuttugum sayi tahmininizden buyuk.";
		return false;
	}
	else if(x > random){
		cout<<"Tuttugum sayi tahmininizden kucuk.";
		return false;
	}
	else{
		cout<<"Bildiniz"<<endl<<"Tebrikler!"<<endl<<" .tahminde bildiniz."<< this->tahminSayisi;
		return true;
	}
}

