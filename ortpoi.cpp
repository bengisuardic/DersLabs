#include <stdio.h>
#include <math.h>
void ortalamayaYakiniBul(int *,int *, int *, float *);
int main()
{
	int dizi[9]= {9,7,3,4,11,67,25,56,34};
	int indis;
	int eleman;
	float ortalama;
	
	ortalamayaYakiniBul(dizi, &indis, &eleman, &ortalama);
	printf("Ortalama: %.2f\n", ortalama);
    printf("En yakin eleman: %d\n", eleman);
    printf("Indisi: %d\n", indis);
    
    return 0;
}
void ortalamayaYakiniBul(int *dizip,int *indisp, int *elemanp, float *ortp)
{
	int i;
	int top = 0;
	int uzaklik = 0;
	int yedek = 200;
	
	for (i=0;i<9;i++){
		top = top + dizip[i];
	}
	*ortp = top / 9;
	
	for (i=0;i<9;i++){
		uzaklik = fabs (*ortp - dizip[i]);
		
		if (uzaklik < yedek){
			yedek = uzaklik;
			*indisp = i;
			*elemanp = dizip[i];
		}
	}
}
