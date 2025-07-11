#include <stdio.h>
int main()
{
   float sayi1;
   float sayi2;
   float sayi3;
   float enBuyuk;
   
   printf("Sayilari giriniz (3 adet):  ");
   scanf("%f%f%f", &sayi1, &sayi2, &sayi3);
   
   enBuyuk = sayi1;
   if( sayi2 > enBuyuk )
    enBuyuk = sayi2;
    
   if( sayi3 > enBuyuk )
    enBuyuk = sayi3;
   
   printf("Girilenlerin en buyugu = %.2f", enBuyuk);
   
   return 0; 
}
