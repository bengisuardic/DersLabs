#include <stdio.h>
#include <conio.h>
int main ()
{
	int sayi=100;
	int a,b,c;
	
	printf("Aranilan sayilar: ");
	
	while(sayi <= 999){
		a = sayi % 10;
		b = (sayi % 100) /10;
		c = (sayi / 100);
		 
	   	if (( a * a * a ) + ( b * b * b ) + ( c * c * c) == sayi){
	   		printf("%d\t", sayi);
		   }
		   sayi++;
	}
	return 0;
}
