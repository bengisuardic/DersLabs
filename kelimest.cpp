#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char cumle[80];
	char kelime[20];
	char *araptr;
	int sayac=0;
	
	printf("Bir cumle giriniz: ");
	fgets(cumle, 80, stdin);
	printf("Aranacak kelimeyi giriniz: ");
	scanf("%s", kelime);
	araptr = strstr(cumle, kelime);
	while (araptr != NULL){
		sayac++;
		araptr++;
		araptr = strstr(araptr,kelime);
	}
	printf("\"%s\" kelimesi cumle icinde %d kere gecer \n", kelime ,sayac);
	
	return 0;
}
