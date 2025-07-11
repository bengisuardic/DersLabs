//Kendisine gonderilen 2*3 luk karakter turundeki bir diziyi ekrana yazan yazdir 
//adindaki fonksiyon

#include <stdio.h>

void yazdir (char dizi[][3], int satir, int sutun)
{
    int i,j;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%c ", dizi[i][j]);
        }    
        
        printf("\n");
    }
}




int main()
{
    char dizi[2][3] = {{'d','a','s'},{'t','r','f'}};
    yazdir(dizi, 2,3);
    return 0;
}

