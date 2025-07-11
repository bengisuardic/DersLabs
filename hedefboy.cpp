#include<stdio.h>
int main()
{
	int cins,E,e,K,k;
	float baboy,anboy;
	float hedefBoy;
	
	printf("Cocugun cinsiyetini giriniz (e,E - k,K): ");
	scanf("%c", &cins);
	printf("Anne boyu giriniz (m) : ");
	scanf("%f", &anboy);
	printf("Baba boyu giriniz (m) : ");
	scanf("%f", &baboy);
	
    if (cins==e,E){
    	hedefBoy = ( baboy + anboy + 0.13 ) / 2;
    	printf("Hedef boy : %.2f", hedefBoy);
	}
	else{
	    hedefBoy = (baboy + anboy - 0.13 ) / 2;
		printf("Hedef boy : %.2f", hedefBoy);
	}
	
	if (cins==e,E && 1.75<=hedefBoy<=1.76){
		printf("Turkiye ortalamasinda olacak. ");
	}
	else if (cins==k,K && 1.63<=hedefBoy<=1.64){
		printf("Turkiye ortalamasinda olacak. ");
	}
	else{
		printf("Turkiye ortalamasinda olmayacak.");
	}
	return 0;
}
