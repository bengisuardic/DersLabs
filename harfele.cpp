#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void harfleriEle(char *);
int main()
{
char kelime[50];
printf("Kelimeyi giriniz:");
scanf("%s",kelime);
harfleriEle(kelime);
return 0;
}
void harfleriEle(char *kelime)
{
int i;
for(i=0;i<strlen(kelime);i++)
{
if(isalpha(*(kelime+i))){
continue;
printf("%s",*(kelime+i));
 }
 }
}

