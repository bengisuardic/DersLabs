#include <stdio.h>

int main()
{
	float a[6];
	float b[6];
	float c[12];
	int i;
	
	
	printf("a dizisinin elemanlarini giriniz:");
	for(i=0;i<6;i++){
		scanf("%f", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz:");
	for(i=0;i<6;i++){
		scanf("%f", &b[i]);
	}
	printf("c dizisinin elemanlari:");
	for(i=0;i<6;i++){
			printf("%.2f\t%.2f\t", a[i],b[i]);
   }
	
	return 0;
	
}
