#include <stdio.h>
int main()
{
	char ad[50];
	int harfsayisi = 0;
	
	printf("Ilin adini giriniz: ");
	scanf("%s", ad);
	
	while (ad[harfsayisi]!='\0')
	harfsayisi++;
	
	printf("Bu ad %d harften olusuyor", harfsayisi);
	return 0;
}
