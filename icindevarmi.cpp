#include <stdio.h>

int icindeVarMi(int a[],int n1,int b[],int n2){
	int arr[n1],j=0;
	for(int i=0;i!=n1;++i){
		if(a[i] == b[0]){
			arr[j]=i;
			j++;
		}
	}
	int test = 0;
	for (int i = 0;i!=j;++i){
		for (int k=0;k!=n2;++k){
			if(a[arr[i]+k]==b[k])
			test++;
		}
		if(test==n2)
		return 1;
		test = 0;
	}
	return 0;
}
int main()
{
	int dizi1[7]={3,12,1,12,7,3,12};
	int dizi2[3]={12,7,3},c;
	
	c = icindeVarMi(dizi1,7,dizi2,3);
	printf("Sonuc = %d", c);
	
	return 0;
}
