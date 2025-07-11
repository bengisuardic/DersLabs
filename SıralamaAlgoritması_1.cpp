#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10000

int main()
{
          int Array[SIZE];
		  int Repeat;
		  int Index;
		  int Temp;
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
 		  
    	  // Array dizisi elemanlar� rasgele olu�turuluyor.
    	  //---------------------------------------------
    	  for(Index = 0 ; Index < Dimension ; Index++)
    	            Array[Index] = 1 + rand()%1000;
		  
		  // Array dizisi s�ralan�yor.
    	  //---------------------------------------------
    	  for(Repeat = 1 ; Repeat <= Dimension - 1 ; Repeat++)
    	  {
                    for(Index = 0 ; Index <= Dimension - 2 ; Index++)
                    {
                              if(Array[Index] > Array[Index + 1])  
                    		  {
                                        Temp = Array[Index];
                                        Array[Index] = Array[Index + 1];
                                        Array[Index + 1] = Temp;
							  }
					}
    	  }
    	  
    	  // Array Dizisi yazd�r�l�yor.
    	  //---------------------------------------------
    	  for(Index = 0 ; Index < Dimension ; Index++)
    	            printf("%d ",Array[Index]);
    	            
		  system("pause");
    	  return 0;             
}
