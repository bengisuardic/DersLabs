#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int Matrix_A[SIZE][SIZE];
    int Matrix_B[SIZE][SIZE];
    int Matrix_C[SIZE][SIZE];
	int Row,Column;
	int Row_A,Column_A;  // Matrix A sat?r ve s?tun boyutlar?
	int Row_B,Column_B;  // Matrix B sat?r ve s?tun boyutlar?
	int k;
 		  
 	srand(time(NULL));
 		  
 	do
    {
    	// A matrisinin boyutlar? kontrol ediliyor.
	    //---------------------------------------------
		do
        {
            printf("Enter the dimensions of the Matrix A (mxn)\n");
                              
		    printf("Enter the number of row for Matrix A \n");
            scanf("%d",&Row_A);  
                    		  
			printf("Enter the number of column for Matrix A \n");
            scanf("%d",&Column_A);  
              
            if(Row_A > 10 || Column_A > 10)
            printf("Error: Enter a number less than 10 for Matrix A.\n");
              		
	      	}while(Row_A > 10 || Column_A > 10);  // Matrix_A dizisinin tan?m?nda boyut bilgisi 10x10 verilmi?tir. Daha b?y?k de?er girilmemesi gerekir. Kontrol sa?lan?yor.
	      			
	      	// B matrisinin boyutlar? kontrol ediliyor.
	      	//---------------------------------------------
		  	do
          	{
                printf("Enter the dimensions of the Matrix B (mxn)\n");
                              
				printf("Enter the number of row for Matrix B \n");
                scanf("%d",&Row_B);  
                    		  
				printf("Enter the number of column for Matrix B \n");
                scanf("%d",&Column_B);  
              
                if(Row_B > 10 || Column_B > 10)
                printf("Error: Enter a number less than 10 for Matrix B.\n");
              		
	      		}while(Row_B > 10 || Column_B > 10);  // Matrix_A dizisinin tan?m?nda boyut bilgisi 10x10 verilmi?tir. Daha b?y?k de?er girilmemesi gerekir. Kontrol sa?lan?yor.
	      			
	      		if(Column_A != Row_B)
	    		printf("Error: Matrix multiplication is not defined.\n\n");
	    
		  }while(Column_A != Row_B); // Matris ?arpma i?lemi tan?ml? olmal?. Kontrol sa?lan?yor.
		  
    	  // Matrix A elemanlar? rasgele olu?turuluyor.
    	  //---------------------------------------------
    	  for(Row = 0 ; Row < Row_A ; Row++)
    	            for(Column = 0 ; Column < Column_A ; Column++)
    	                      Matrix_A[Row][Column] = 1 + rand()%10;

    	  // Dizinin elemanlar? yazd?r?l?yor.
    	  //---------------------------------------------
    	  printf("Matrix A:\n");
    	  for(Row = 0 ; Row < Row_A ; Row++)
    	  {
            for(Column = 0 ; Column < Column_A ; Column++)
          	{
          		printf("%d\t",Matrix_A[Row][Column]);
          	}
          		printf("\n");
          }
          
          printf("\n");
		
		  // Matrix B elemanlar? rasgele olu?turuluyor.
    	  //---------------------------------------------
    	  for(Row = 0 ; Row < Row_B ; Row++)
    	        for(Column = 0 ; Column < Column_B ; Column++)
    	        Matrix_B[Row][Column] = 1 + rand()%10;

    	  // Dizinin elemanlar? yazd?r?l?yor.
    	  //---------------------------------------------
    	  printf("Matrix B:\n");
    	  for(Row = 0 ; Row < Row_B ; Row++)
    	  {
            for(Column = 0 ; Column < Column_B ; Column++)
          	{
          			printf("%d\t",Matrix_B[Row][Column]);
          	}
          	printf("\n");
          }
          
          printf("\n");
		
		  // Matris ?arpma i?lemi yap?l?yor.
    	  //---------------------------------------------
    	  for(Row = 0 ; Row < Row_A ; Row++)  // Size_A = Size_B olmak zorunda Szie_A yerine Size_B kullan?labilir.
    	  {
            for(Column = 0 ; Column < Column_B ; Column++)
          	{
				Matrix_C[Row][Column] = 0;
					          
				for(k = 0 ; k < Column_A ; k++)  // Column_A = Row_B oldu?u i?in her ikisi de yaz?labilir.
				Matrix_C[Row][Column] = Matrix_C[Row][Column] + Matrix_A[Row][k] * Matrix_B[k][Column];
          	}
    	  }
    	  
    	  // Matrix C elemanlar? yazd?r?l?yor.
    	  //---------------------------------------------
    	  printf("Matrix C:\n");
    	  for(Row = 0 ; Row < Row_A ; Row++)
    	  {
            for(Column = 0 ; Column < Column_B ; Column++)
          	{
          		printf("%d\t",Matrix_C[Row][Column]);
          	}
          		printf("\n");
          }
		   
		  system("pause");
    	  return 0;             
}
