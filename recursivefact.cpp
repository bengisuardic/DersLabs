#include <stdio.h>
#include <stdlib.h>

long Factorial(int);  

int main() 
{
    int n;
    long Back;
          
	printf("Enter n >>> ");  
	scanf("%d",&n);
  	
	Back = Factorial(n); 
  		  
  	printf("Factorial = %ld\n",Back);
  		  
  	system("pause");
  	return 0;
}

long Factorial(int x) 
{	
    if(x == 1) 
	 return 1;
  	else 
     return x * Factorial(x - 1);	 
}

