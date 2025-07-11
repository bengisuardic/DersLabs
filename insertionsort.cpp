#include<stdio.h>
#include<stdlib.h>

int  main(){
	int a[4] = {5,2,7,3};
	int i,j,k;
	int m;
	int temp;
	
	for(j=2;j<4;j++){
		i=1;
		while(a[j]>a[i])
		i=i+1;
		m=a[j];
		for(k=0;k<j-i-1;k++){
		temp = a[j-k];
		a[j-k] = a[j-k-1];
		a[j-k-1] = temp;
	}
	a[i] = m;
	printf(" %d",m);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
