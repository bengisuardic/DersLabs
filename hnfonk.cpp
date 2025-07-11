#include <stdio.h>
char harfNotuBul (int basariNotu, float sinifOrt, float stdSapma)
{
	char harfNotu;
	float stdNot = (basariNotu - sinifOrt) /  stdSapma;
	
	if(stdNot >= 2)
	   harfNotu = 'A';
	else if(stdNot >=1 || stdNot < 2)
	   harfNotu = 'B';
	else if(stdNot >= 0 || stdNot < 1)
	   harfNotu = 'C';
	else
	   harfNotu = 'F';
	   
	return harfNotu;
}

int main ()
{
	int bNotu;
	float sinifOrt, stdSapma;
	char harf;
	
	printf("Lutfen basari notu, sinif ortalamasi ve standart sapma degerlerini giriniz:\n");
	scanf("%d %d %d ", &bNotu, sinifOrt, stdSapma);
	
	harf = harfNotuBul(bNotu, sinifOrt, stdSapma);
	
	printf("Harf Notu = %c", harf);
	return 0;
}
