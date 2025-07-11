#include <stdio.h>

int main ()
{
	int a[6],b[6],c[12];
	int i,j;
	
	printf("a dizisinin elemanlarini griniz:");
	for(i=0;i<6;i++){
		scanf("%d", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz:");
	for(j=0;j<6;j++){
		scanf("%d", &b[j]);
	}
	
	for(i=0;i<6;i++){
		c[i*2]=a[i];
	    c[i*2+1]=b[i];
	}

	
	for(i=0;i<12;i++){
		printf("\t%d", c[i]);
	}
	
	return 0;
}
