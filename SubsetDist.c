
/*===================================================================*/
/* C program for distribution from the Combinatorial Object Server.  */
/* Generate subsets in colex order. This                             */
/* is the same version used in the book "Combinatorial Generation."  */
/*===================================================================*/

#include <stdio.h>
#include <stdlib.h>

// Global deðiþken tanýmlarý
//------------------------------------------------------
int n;
int b[50];

// Fonksiyon prototipleri
//------------------------------------------------------
void PrintIt(void);
void SubLex(int);

//------------------------------------------------------
int main() 
{
          printf("Enter the number of elements of the set >>> ");  
		  scanf("%d",&n);
  	
		  SubLex(n);
  	
  		  system("pause");
  		  return 0;
}

//------------------------------------------------------
void PrintIt(void) 
{
          int i,first;

          for(i = 1 ; i <= n ; i++) 
	                printf("%d ",b[i]);
	          
	      printf("  {"); 
	      
	      first = 1;
	      
	      for(i = 1 ; i <= n ; i++) 
	      {
		            if(b[i] == 1) 
		            {
					          if(first == 0) 
			       			            printf(",");
							  
							  first = 0;
							  printf("%d",i);
					}
		  }
		  
		  printf("}\n");
}

//------------------------------------------------------
void SubLex(int N) 
{	
          if(N == 0) 
	                PrintIt();
  		  else 
		  {
     	            b[N] = 0;  SubLex( N-1 );  
     			//	b[N] = 1;  SubLex( N-1 );  
  		  }		 
}


