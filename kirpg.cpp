#include <stdio.h>
void sagdanKirp ( int *, int );
int main()
{
	int sayi;
	int miktar;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	printf("Sagdan kirpilacak sayiyi giriniz: ");
	scanf("%d", &miktar);
	
	sagdanKirp( &sayi, miktar);
	
	printf("\nSayinin kirpilmis hali = %d \n", sayi);
	return 0;
}
void sagdanKirp ( int *sayip, int n )
{
	while (n > 0){
		*sayip = *sayip / 10;
		n--;
	}
}
