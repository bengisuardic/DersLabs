#include <stdio.h>
#include <math.h>
void bulBozuklukSayisi(double, int *, int *, int *, int *, int *);
int main()
{
	double para;
	int lira;
	int elli;
	int yirmibes;
	int on;
	int bes;
	
	printf("Para miktarini giriniz: ");
	scanf("%lf", &para);
	bulBozuklukSayisi(para, &lira, &elli, &yirmibes, &on, &bes);
	printf("\n-----------------------\n");
	printf("%d adet 1TL\n%d adet 50Kr\n%d adet 25Kr\n%d adet 10Kr\n%d adet 5Kr",lira, elli, yirmibes, on, bes);
	
	return 0;
}
void bulBozuklukSayisi(double miktar, int *tl, int *elli, int *yirmi, int *on, int *bes)
{
	int deger;
	
    *tl = floor(miktar);
    miktar -= 1*(*tl);
    *elli = miktar / 0.5;
    miktar -= 0.5*(*elli);
    *yirmi = miktar / 0.25;
    miktar -= 0.25*(*yirmi);
    *on = miktar / 0.1;
    miktar -= 0.1*(*on);
    *bes = miktar / 0.05;
    miktar -= 0.05*(*bes);
}
