#include <stdio.h>
int main()
{
	char harf;
	int sayi;
    int fact=1;
    int i;
        
    printf("Bir harf seciniz (A,a,B,b): ");
    scanf("%s", &harf);
    printf("Bir sayi giriniz: ");
    scanf("%d", &i);
	
    switch(harf){
    	case 'A':
    	case 'a':
    		while(i>=2 && i<=4){
    		  for(i=2;i<=sayi;i++){
    			fact *= i;
			}
		}
		case 'B':
		case 'b':
			while(i>=3 && i<=6){
				for(i=3;i<=sayi;i++){
					fact *= i;
				}
			}
	}
	printf("Faktoriyel degeriniz= %d", fact);
	return 0;
}
