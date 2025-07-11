#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10000

int main()
{
          int Array[SIZE];
		  int Number;
		  int Index;
		  long Dimension;
		  	  
 		  srand(time(NULL));
 		  
 		  // A matrisinin boyutlar� kontrol ediliyor.
	      //---------------------------------------------
		  do
          {
                    printf("Enter the dimensions of the Matrix A >>>");
                    scanf("%d",&Dimension);  
                    		  
                    if(Dimension > SIZE)
                              printf("Error: Enter a number less than %ld for Matrix A.\n",SIZE);
              		
	      }while(Dimension > SIZE);
 		  
 		  // Array dizisi i�inde aranacak say� belirleniyor.
 		  //---------------------------------------------
 		  printf("Number >>>");
 		  scanf("%d",&Number);
 		  
    	  // Array dizisi elemanlar� rasgele olu�turuluyor.
    	  //---------------------------------------------
    	  for(Index = 0 ; Index < Dimension ; Index++)
    	            Array[Index] = 1 + rand()%1000;

		  // Array dizisi i�inde aranan eleman ara�t�r�l�yor.
    	  //---------------------------------------------
    	  for(Index = 0 ; Index < Dimension ; Index++)
    	  {
                    if(Number == Array[Index])  
                    {
                              printf("The searched number %d is found in the %d index of the Array.\n",Number,Index);
                              break;
					}
    	  }
    	  
    	  if(Index == Dimension)
    	            printf("The searched number is not found in the array.\n");
    	            
		  system("pause");
    	  return 0;             
}

	
	

