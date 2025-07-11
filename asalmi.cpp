#include <stdio.h>
int main()
{
	int sayi,i=0,asalMi=0;
	
	do{
		printf("\nSayi giriniz: ");
		scanf("%d", &sayi);
		
		while(sayi<1000 || sayi>=10000){
			printf("\nSayi 4 basamakli degildir.");
			printf("\nSayi giriniz: ");
			scanf("%d", &sayi);
		}
		for(i=2; i<sayi; i++){
			if(sayi%i == 0){
				asalMi=1;
				break;
			}
		}
		if(asalMi == 1)
		  printf("\nAsal degil");
		else
		  printf("Asal");
	}while (sayi != 4000);
	return 0;
}
