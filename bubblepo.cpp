#include<stdio.h>
void yaz(int *, int);
void bubble(int *, int);
void yerDegistir(int *, int *);
int main()
{
	int kume[5] = {5,4,3,2,1};
	
	bubble(kume,5);
	yaz(kume,5);
	
	return 0;
}
void yaz(int *dizi,int a)
{
	int i;
	for (i=0;i<a;i++)
	printf("%d\n", *(dizi+i));
}
void bubble(int *dizi, int n)
{
	int i,j,yedek;
	for (i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(*(dizi+j) > *(dizi+j+1))
			yerDegistir((dizi+j),(dizi+j+1));
		}
	}
}
void yerDegistir(int*a,int*b)
{
	int yedek;
	
	yedek=*a;
	*a=*b;
	*b=yedek;
}
