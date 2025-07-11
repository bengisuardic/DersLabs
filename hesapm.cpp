#include <stdio.h>
int main()
{
	int sonuc;
	int sayi1,sayi2;
	char tip;
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d", & sayi2);
	printf("Islem tipini giriniz : ");
	scanf("%s" , &tip);
	
	switch(tip){
		case '+':
		sonuc = sayi1 + sayi2;
		printf("Islemin sonucu = %d",sonuc);
			break;
		case'-':
		sonuc = sayi1 - sayi2;
		printf("Islemin sonucu = %d",sonuc);
		    break;
		case '*':
		sonuc = sayi1 * sayi2;
		printf("Islemin sonucu = %d",sonuc);
		    break;
		case '/':
		sonuc = sayi1 / sayi2;
		printf("Islemin sonucu = %d",sonuc);
		    break;
		default:
		printf("\nYanlis deger girdiniz!");	
		break;
	}
	return 0;
	
}
