#include <stdio.h>
#include <conio.h>
int main()
{
	int ilk;
	int son;
	int adet;
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d", &ilk);
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d", &son);
	
	while(ilk <= son){
		if((ilk % 4 == 0) && (ilk % 7 == 0)){
			printf("%d,", ilk);
			adet++;
		}
		ilk++;
	}
	printf("\nToplam %d adet", adet);
	return 0;
}
