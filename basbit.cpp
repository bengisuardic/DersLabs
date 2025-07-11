#include <stdio.h>
#include <conio.h>
int main()
{
	int bas;
	int bit;
	int adet;
	
	printf("Baslangic ve bitis degerlerini giriniz: ");
	scanf("%d %d", &bas, &bit);
	printf("Sayilar sunlaardir: ");
	
	for(int i = bas;i <= bit;i ++){
		if(i % 2 == 0){
        printf("%d " ,i);
        adet++;
		}
    }
	printf("Toplam %d adet", adet);
	return 0;
}
