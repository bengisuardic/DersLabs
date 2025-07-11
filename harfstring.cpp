#include <stdio.h>
#include <string.h>
#include <ctype.h>
void hesapla(char *,int *,int *, int *);
int main()
{
	char cumle[100];
	int harf=0;
	int rakam=0;
	int ozel=0;
	
	printf("Cumleyi giriniz:");
	fgets(cumle,100,stdin);
	
	hesapla(cumle, &harf, &rakam, &ozel);
	
	printf("\n--------------------------");
	printf("\nHarf sayisi: %d\nRakam sayisi: %d\nOzel karakter sayisi: %d", harf, rakam, ozel-1);
	
	return 0;
}
void hesapla(char *s, int *h, int *r, int *o)
{
	int i;
	int karak;
	
	karak = strlen (s);
	for (i=0;i<karak;i++){
		if(isalpha(s[i]) != 0)
		  (*h)++;
		if(isdigit(s[i]) != 0)
		  (*r)++;
		if(isspace(s[i]) != 0 || ispunct(s[i]) != 0)
		  (*o)++;
	}
}
