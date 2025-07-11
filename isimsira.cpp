#include<stdio.h>
#include <string.h>
int main()
{
	char array[5][50];
	int i=0,j=0;
	char temp[50];
	
	for(i=0;i<5;i++){
		printf("Bir isim giriniz: ");
		scanf("%s", array[i]);
	}
	for(i=0;i<5;i++){
	 for(j=0;j<4-i;j++){
	  if(strcmp(array[j], array[j+1]) >0){
	  	strcpy(temp , array[j]);
	  	strcpy(array[j] , array[j+1]);
	  	strcpy(array[j+1] , temp);
	  }
    }
  } 	
   printf("\nIsimlerin siralanmis hali:\n");
	for(i=0;i<5;i++)
	  printf("%s\n", array[i]);
	return 0;
}
