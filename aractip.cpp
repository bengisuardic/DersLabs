#include<stdio.h>
int main()
{
	int gunSayisi;
	int ucret;
	char aracTipi;
	
	printf("Arac tipi giriniz (A,a) : ");
	scanf("%c", &aracTipi);
	printf("\nGun sayisini giriniz : ");
	scanf("%d", &gunSayisi);
	
	switch (aracTipi){
		case 'a':
		case 'A':
		ucret = 100 * gunSayisi;
		printf("Ucret : %d\n", ucret);
		   break;
		case 'b':
		case 'B':
		ucret = 200 * gunSayisi;
		printf("Ucret : %d\n", ucret);
		  break;
		case 's':
		case 'S':
		ucret = 50 * gunSayisi;
		printf("Ucret : %d\n", ucret);
		  break;
		default: 
		 printf("Ynlis deger girdiniz.\n");
		     	
	}
	return 0;
}
