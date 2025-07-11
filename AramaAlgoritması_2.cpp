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
		  int Counter;
		  	  
 		  srand(time(NULL));
 		  
 		  // A matrisinin boyutlarý kontrol ediliyor.
	      //---------------------------------------------
		  do
          {
                    printf("Enter the dimensions of the Matrix A >>>");
                    scanf("%d",&Dimension);  
                    		  
                    if(Dimension > SIZE)
                              printf("Error: Enter a number less than %ld for Matrix A.\n",SIZE);
              		
	      }while(Dimension > SIZE);
 		  
 		  // Array dizisi içinde aranacak sayý belirleniyor.
 		  //---------------------------------------------
 		  printf("Number >>>");
 		  scanf("%d",&Number);
 		  
    	  // Array dizisi elemanlarý rasgele oluþturuluyor.
    	  //---------------------------------------------
    	  for(Index = 0 ; Index < Dimension ; Index++)
    	            Array[Index] = 1 + rand()%1000;

		  // Array dizisi içinde aranan eleman araþtýrýlýyor.
    	  //---------------------------------------------
    	  Counter = 0;
    	  for(Index = 0 ; Index < Dimension ; Index++)
    	  {
                    if(Number == Array[Index])  
                              Counter++;
    	  }
    	  
    	  if(Counter != 0)
    	            printf("The searched number %d repeated in the Array.\n",Counter);
    	  
		  else
    	            printf("The searched number is not found in the array.\n");
    	            
		  system("pause");
    	  return 0;             
}

	
	

