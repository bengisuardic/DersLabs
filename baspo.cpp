#include <stdio.h>
void ayristir(int, int *,int *, int *,int *);

int main()
{
	int sayi,birler,onlar,yuzler,binler;
	
	printf("Sayiyi giriniz:");
	scanf("%d", &sayi);
	
	ayristir(sayi,&birler,&onlar,&yuzler,&binler);
	
	printf("\n%d sayisinin birler basamagi : %d", sayi, birler);
	printf("\n%d sayisinin onlar basamagi : %d", sayi, onlar);
	printf("\n%d sayisinin yuzler basamgi : %d", sayi, yuzler);
	printf("\n%d sayisinin binler basamagi : %d", sayi, binler);
	
	return 0;
}
void ayristir(int sayi, int *birlerp,int *onlarp, int *yuzlerp,int *binlerp)
{
	*birlerp = sayi % 10;
	*onlarp = ((sayi%100)-*birlerp) / 10;
	*yuzlerp = (sayi % 1000) / 100;
	*binlerp = sayi / 1000;
}
