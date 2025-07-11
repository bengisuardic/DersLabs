#include<stdio.h>
int main ()
{
	int a,b,c,d,e,sayi;
	
	printf("5 basamakli bir sayi giriniz ");
	scanf("%d", &sayi);
	
	a=(sayi/10000);
	b=(sayi/1000) % 10;
	c=(sayi/100) % 10;
	d=(sayi/10) % 10;
	e=(sayi % 10);
	
	if(a==e && b==d){
		printf("Girilen sayi palindrome sayidir.");
	}
	else{
		printf("Girilen sayi palindrome sayi degildir.");
	}
	
	return 0;
}
