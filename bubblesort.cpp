#include <stdio.h>

int main()
{
	int dizi[5]={0,12,13,5,8};
	int gecis;
	int j,yedek;
	
    printf("Dizinin sirasiz hali:");
    for(j=0;j<5;j++)
    printf("\t%d", dizi[j]);
    
    for(gecis=0;gecis<4;gecis++){
    	for (j=0;j<4;j++){
    		if(dizi[j]>dizi[j+1]){
    			yedek=dizi[j];
    			dizi[j]=dizi[j+1];
    			dizi[j+1]=yedek;
			}
		}
	}
	printf("\nDizinin sirali hali:");
	for(j=0;j<5;j++)
	  printf("\t%d", dizi[j]);
	
	return 0;
}
