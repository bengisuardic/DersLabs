#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void bahaneYaz(int bahane)
{
	int bahane3;
	srand(time(NULL));
	bahane3 = 1+rand()%10;
	while (bahane3 == bahane){
		bahane3 = 1 + rand() % 10;
	}
	
	
	switch(bahane3){
		case 1:
			printf("bu isin arkasinda amerika vardir\n");
			break;
		case 2:
			printf("bu isin arkasinda japonya vardir\n");
			break;
		case 3:
			printf("bu isin arkasinda ispanya vardir\n");
			break;
		case 4:
			printf("bu isin arkasinda fransa vardir\n");
			break;
		case 5:
			printf("bu isin arkasinda rusya vardir\n");
			break;
		case 6:
			printf("bu isin arkasinda katar vardir\n");
			break;
		case 7:
			printf("bu isin arkasinda almanya vardir\n");
			break;
		case 8:
			printf("bu isin arkasinda ingiltere vardir\n");
			break;
		case 9:
			printf("bu isin arkasinda cin vardir\n");
			break;
		case 10:
			printf("bu isin arkasinda turkiye vardir\n");
			break;
		
	}
}

int main()
{
	int bahane3;
	bahaneYaz(bahane3);
	return 0;
}
