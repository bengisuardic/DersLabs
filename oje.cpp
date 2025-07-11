#include <stdio.h>
int main()
{
	int kir,sar,siy,yes;
	int kod;

	printf("Kod giriniz (1,2,3,4 ya da cikmak icin 111):");
	scanf("%d", &kod);
	
	while(kod != 111){
		while (kod>=5){
		  printf("Hata!! Lutfen gecerli bir kod giriniz.");	
		}
		  printf("\nKod giriniz (1,2,3,4 ya da cikmak icin 111):");
		  scanf("%d", &kod);
		  	
		  switch (kod){
		  	case 1:
		  		kir++;
		  		break;
		  	case 2:
		  		yes++;
		  		break;
		  	case 3:
		  		sar++;
		  	    break;
		  	case 4:
		  		siy++;
		  		break;
		  	
		  }
	}
	printf("Gunun satis raporu: \n%d Kirmizi, %d Yesil, %d Sari, %d Siyah oje satilmistir.", kir, yes, sar, siy);
	
	return 0;
}
