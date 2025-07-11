#include <stdio.h>
void Yazdir (int bas, int bit)
{
	int i;
	for (i=bas; i<bit; i++)
	{
    	if(i%4==0 && i%7==0)
		printf("\n%d", i);
	}
}
int main()
{
	int bas;
	int bit;
	printf("Baslangic ve bitis degerlerini giriniz\n");
	scanf("%d %d",&bas, &bit);
	
	
	Yazdir(bas, bit);
}
