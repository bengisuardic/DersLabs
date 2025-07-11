#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void islemYaz(char, int);
int main()
{
	int s1,s2;
	char islemT;
	int bas;
	
	srand (time(NULL));
	printf("Islem tipi seciniz:");
	scanf("%c", &islemT);
	printf("Basamak sayisi giriniz:");
	scanf("%d", &bas);
	islemYaz(islemT,bas);
	
	return 0;
}
void islemYaz(char x,int y )
{
	int islem;
	int s1,s2;
	if(y==3){
		s1 = 100 + rand() % 900;
		s2 = 100 + rand() % 900;
	}
	else if(y==2){
		s1 = 10 + rand() % 90;
		s2 = 10 + rand() % 90;
	}
	printf("%d\n%d\n", s1, s2);
	switch(x){
		case '+':
			printf("+_____\n");
			islem = s1 + s2;
			printf("%d", islem);
			break;
		case '-':
			printf("-_____\n");
			if(s1>s2){
			islem = s1 - s2;
			printf("%d",islem);
		}
			else{
			islem = s2 - s1;
			printf("%d",islem);
		}
			break;
	}
}
