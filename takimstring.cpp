#include <stdio.h>
#include <string.h>
#include <ctype.h>
void hesapla(char *, int *, int *, int *);
int main()
{
	char s[100];
	int b=0;
	int f=0;
	int g=0;
	
	printf("Sampiyonluklari giriniz (1959-): ");
	fgets(s,100,stdin);
	
	hesapla(s, &b, &f, &g);
	
	printf("\n----------------------");
	printf("\nBesiktas yildiz sayisi: %d", b);
	printf("\nFenerbahce yildiz sayisi: %d", f);
	printf("\nGalatasaray yildiz sayisi: %d", g);
	
	return 0;
}
void hesapla(char *arr, int *bes, int *fen, int *gal)
{
	int i;
	int karakter;
    karakter = strlen(arr);
    
  	for(i=0;i<karakter;i++){
  		if(toupper(*(arr + i))=='B')
  		  (*bes)++;
  		else if(toupper(*(arr + i)) == 'F')
  		  (*fen)++;
  		else if(toupper(*(arr+i)) == 'G')
  		  (*gal)++;
	  }
	*bes = (*bes) / 5;
	*fen = (*fen) / 5;
	*gal = (*gal) / 5;
}
