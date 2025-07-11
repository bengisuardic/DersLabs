#include <stdio.h>

int kalinUnluSayisiBul(char dizi[], int n)
{
	int i, sayac=0;
    for (i=0;i<n;i++){
    	if(dizi[i]=='a' || dizi[i]=='ý' || dizi[i]=='o' || dizi[i]=='u')
    	sayac++;
	}
	return sayac;
}
int main()
{
	char dizi[7]={'i','s','ý','t','a','u','b'};
	int sayi = kalinUnluSayisiBul(dizi,7);
	printf("%d", sayi);
	return 0;
}
