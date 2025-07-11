#include <stdio.h>

void Sirala(int dizi[], int n)
{
	int sayac=0;
	int i,j;
	int yedek;
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(dizi[j] > dizi[j+1]){
				yedek = dizi[j];
				dizi[j] = dizi[j+1];
				dizi [j+1] = yedek;			
			}
		}
   }
   for (i=0;i<n;i++){
      printf("%d\n", dizi[i]);
	}
}
int main()
{
	int i;
	int a[3] = {12,1,5};
	Sirala(a,3);
	return 0;
}
