#include <stdio.h>
int main()
{
	int kilo;
	int hafif;
	int orta;
	int agir;
	int adet;
	int toplam;
	float ort;
	
	
	printf("Kilo giriniz: ");
	scanf("%d", &kilo);
	
	while(kilo != 0){
		while(kilo == 0){
			break;
		}
		if(kilo < 50){
			hafif++;
		}
		else if(kilo >= 50 && kilo < 70){
		    orta++;
	    }
		else if(kilo >= 70){
		    agir++;
		}
		
    printf("Kilo giriniz: ");
	scanf("%d", &kilo);	
	
    	while(kilo < 0){
		printf("Hata!! Lutfen pozitif deger giriniz.");
		printf("Kilo giriniz: ");
		scanf("%d", &kilo);
	}
	
	adet = hafif + orta + agir;
	toplam += kilo;
	ort = toplam / (hafif + orta +agir);
	}
	printf("%d hafif, %d orta ve %d agir siklet vardir.", hafif, orta, agir);
	printf("\n%d adet sporcu kilosu girildi.", adet);
	printf("\nSporcu kilo ortalamalari %.2f dir.",ort);
	
	return 0;	
}
