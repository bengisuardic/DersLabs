#include <stdio.h>
int main()
{
	int i;
	int ilk2;
	int son2;
	int toplam;
	int toplamkare;
	int adet;
	
	printf("Sayilar\t");
	for (i=1000;i<10000;i++){
		ilk2 = i / 100;
		son2 = i % 100;
		toplam = ilk2 + son2;
		toplamkare = toplam * toplam;
		
		if(toplamkare == i){
			printf("%d\t", i);
			adet ++;
		}
	}
	printf("\tToplam = %d adet", adet);
	return 0;
}
