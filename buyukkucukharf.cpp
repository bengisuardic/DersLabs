#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char s[25];
	int i;
	
	printf("Kelimeyi giriniz: ");
	scanf("%s", s);
	for(i=0;i<strlen(s);i++){
		if(isupper(s[i]))
		   s[i] = tolower(s[i]);
	    else
	        s[i] = toupper(s[i]);
    }
	printf("Donusturulmus hali: %s", s);
	return 0;
}
