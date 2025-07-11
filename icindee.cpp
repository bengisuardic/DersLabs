#include <stdio.h>
#include <stdlib.h>
int icindeVarMi(char dizi1[6], char dizi2[3])
{
	int flag=0;
	int i,j;
	int arr[6];
	
	for(i=0;i<6;i++){
		if(dizi1[i] == dizi2[0]){
			arr[j] == i;
			j++;
		}
	}
	for(i=0;i<j;i++){
		for(int k=0;k<3;k++){
			if(dizi1[arr[i]+k]==dizi2[k])
			flag ++;
			else{
				return 1;
				flag = 0;
			}
		}
	}
	return 0;
}
int main()
{
	char dizi1[6] = {'a','n','k','a','r','a'};
	char dizi2[3] = {'k','a','r'};
	int c;
	
	c = icindeVarMi (dizi1, dizi2);
	printf("Sonuc = %d", c);
	
	return 0;
}
