#include <stdio.h>
int main()
{
	float topTutar,mhb,kmiktari;
	int kdv;
	
	printf("KDV dahil toplam tutari giriniz: ");
	scanf("%f", &topTutar);
	printf("KDV oranini giriniz: ");
	scanf("%d", &kdv);
	
	mhb = (topTutar/(1 + (kdv%100)));
	printf("KDV haric mal hizmet bedeliniz: %.2f",mhb);
	
	kmiktari = (topTutar-mhb);
	printf("\nHesaplanan KDV miktariniz: %.2f",kmiktari);
	
	
	return 0;
}
