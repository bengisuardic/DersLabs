#include <stdio.h>
#include <string.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	float ort;
};

int main ()
{
	struct ogrenci s[10];
	int i;
	int j;
	struct ogrenci temp[20];	
	
	for(i=0;i<3;i++){
		printf("%d.Ogrencinin adini, sayadini, ortalamasini giriniz:", i+1);
		scanf("%s%s%f", s[i].ad, s[i].soyad, &s[i].ort);
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if(strcmp(s[i].soyad,s[i+1].soyad) > 0){
				strcpy(temp,s[i].soyad);
				strcpy(s[i].soyad,s[i+1].soyad);
				strcpy(s[i+1].soyad,temp);
			}
		}
	}
}
	printf ("\n---------LISTE----------\n");
	for(i=0;i<3;i++){
		printf("%s %s %lf",s[i].ad, s[i].soyad, s[i].ort);
	}
	return 0;
}
