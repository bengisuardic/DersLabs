#include <stdio.h>
int main()
{
	int x;
	int saat,dakika,saniye;
	
	printf("Sureyi giriniz (saniye olarak) = ");
	scanf("%d", &x);
	
	saat = x/3600;
	x %=3600;
	
	dakika = x/60;
	
	saniye = x%60;
	
	printf("Saat: %d Dakika: %d Saniye: %d",saat,dakika,saniye);
	
	return 0;
}
