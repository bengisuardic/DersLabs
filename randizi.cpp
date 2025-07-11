#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int eleman;
	int i;
	int sayac;
	int degisen = 0;
	int gecici;
	int sayac1;
	int adet;
	int eski[20];
	
	srand(time(NULL));
	printf("Eleman sayisini giriniz: ");
	int randizi[50];
	for (sayac=0;sayac<eleman;sayac++){
		randizi[sayac] = 1 + rand() %100;
	}
	printf("Otomatik olusturulan dizi: ");
	for(int gecis=1;gecis<eleman;gecis++){
		for(sayac=0;sayac<eleman;sayac++){
			if(randizi[sayac+1]>randizi[sayac]){
				gecici = randizi[sayac+1];
				randizi[sayac+1] = randizi[sayac];
				randizi[sayac] = gecici; 
			}
		}
	}
	for (i=0;i<eleman;i++){
		if(eski[i] != randizi[i]){
			degisen++;
		}
	}
	printf("\n Dizinin sirali hali: ");
	for(sayac=0;sayac<eleman;sayac++){
		printf("%d", randizi[sayac]);
	}
	printf("\n");
	printf("Yeri degisenlerin sayisi: %d");
	
	return 0;
}
