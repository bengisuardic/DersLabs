#include <stdio.h>
int main ()
{
	float dizia[10];
	float dizib[10];
	float dizid[10];
	int sayac;
	float ort;
	float toplam = 0;
	int artis = 0;
	int artis2 = 0;
	
	printf("b elemanlarini giriniz");
	for(sayac=0;sayac < 10;sayac++){
		scanf("%f", &dizib[sayac]);
		toplam = toplam +dizib[sayac];
	}
	ort = toplam / 10;
	for(sayac = 0;sayac<10;sayac++){
		if(dizib[sayac] >= ort){
			dizia[artis] = dizib[sayac];
			artis++;
		}
		else if(dizib[sayac] < ort){
			dizid[artis2] = dizib[sayac];
			artis2++;
		}
	}
	printf("Dizinin aritmetik ortalamasi= %.2f",ort);
	printf("\na dizisinin elemanlari (Ortalamadan buyukler): ");
	for(sayac=0;sayac<artis;sayac++){
		printf("%.2f\t", dizia[sayac]);
	}
	printf("\nd dizisinin elemanlari(Ortalamadan kucukler): ");
	for(sayac=0;sayac<artis2;sayac++){
		printf("%.2f\t",dizid[sayac]);
	}
	return 0;
}
