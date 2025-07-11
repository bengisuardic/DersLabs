#include <stdio.h>

int main ()
{
    int dizi[3][4];
    int satir, sutun;
    
    printf("Dizi elemanlarýný giriniz\n");

    for(satir=0; satir<3; satir++)
    {
        printf("%d. satýr deðerlerini giriniz\n",satir);
        for(sutun=0;sutun<4; sutun++)
        {
            printf("%d. eleman:",sutun);
            scanf("%d", &dizi[satir][sutun]);
        }
    }
    
    for(satir=0;satir<3;satir++)
    {   for(sutun=0;sutun<4;sutun++)
        {    
            printf("%d ", dizi[satir][sutun]);
        }
        printf("\n");
    }
    
   return 0; 
}

