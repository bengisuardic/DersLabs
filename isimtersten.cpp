#include <stdio.h>
int main()
{
	char ad[50];
	int i;
	int harfsayisi = 0;
	
	printf("Adinizi giriniz:");
	scanf("%s", ad);
	printf("Adinizin tersten yazilisi:");
	while (ad[harfsayisi] != '\0')
	harfsayisi++;
	
	for (i=harfsayisi-1;i>=0;i--)
	printf("%c", ad[i]);
	
	return 0;
}
