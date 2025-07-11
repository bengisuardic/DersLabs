#include<stdio.h>
struct takim{
	int altin;
	int gumus;
	int bronz;
	float puan;
};
void buyukOlaniBul(struct takim t1, struct takim t2, struct takim *p){
	float max;
	t1.puan = (t1.altin * 3.2) + (t1.gumus * 2.7) + (t1.bronz * 1.5);
	t2.puan = (t2.altin * 3.2) + (t2.gumus * 2.7) + (t2.bronz * 1.5);
	
	max = t1.puan;
	if(t2.puan > t1.puan){
	    *p = t2;
	}
	else{
		*p = t2;
	}
}
int main()
{
	struct takim t1, t2, buyuk;
	
	printf("Ilk takimin altin, gumus, bronz madalya sayisini giriniz:");
	scanf("%d%d%d", &t1.altin, &t1.gumus, &t1.bronz);
	printf("\nIkinci takimin altin, gumus, bronz madalya sayisini giriniz:");
	scanf("%d%d%d", &t2.altin, &t2.gumus, &t2.bronz);
	buyukOlaniBul(t1, t2, &buyuk);
	
	printf("\nPuani buyuk olanin madalya sayilari ve puani:\n");
	printf("Altin = %d, Gumus = %d, Bronz = %d, Puan = %.2f", buyuk.altin, buyuk.gumus, buyuk.bronz, buyuk.puan);
	
	return 0;
}
