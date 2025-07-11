#include <stdio.h>
#include <conio.h>
int main()
{
	int i=1;
	int sayi,adet=0;
    float toplam,ort;
	
	printf("Sayilari giriniz (10 addet): ");
	
	while (i<=10){
		scanf("%d", &sayi);
		if(sayi % 2 == 1){
			adet ++;
			toplam += sayi;
		}
		i++;
	}
	ort = toplam / adet;
	printf("Girilen sayilardan %d adet tek sayinin aritmetik ortalamasi = %.2f ", adet, ort );
	
	return 0;
}
