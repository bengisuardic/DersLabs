
#include<stdio.h>
int main ()
{
int markaKodu=0, mazdaSayisi=0, renaultSayisi=0, hondaSayisi=0, fordSayisi=0;
float tutar=0, mazdaTutar=0, renaultTutar=0, hondaTutar=0, fordTutar=0;

printf("PROGRAMDAN �IKMAK ���N 111 G�R�N�Z\n");
printf("Marka,tutar giriniz:");
scanf("%d\t", &markaKodu );
scanf("%f", &tutar );
while(markaKodu !=111)
{
switch(markaKodu)
{
case 1:
renaultSayisi++;
renaultTutar = renaultTutar + tutar;
break;
case 2:
mazdaSayisi++;
mazdaTutar = mazdaTutar + tutar;
break;
case 3:
hondaSayisi++;
hondaTutar = hondaTutar + tutar;
break;
case 4:
fordSayisi++;
fordTutar = fordTutar + tutar;
break;
default:
printf("Yanl�� marka girdiniz");
break;
}
printf("\nMarka,tutar giriniz:");
scanf("%d\t", &markaKodu );
scanf("%f", &tutar );
}

printf("PROGRAM SONA ERD�\n");
printf("�ZET B�LG�LER\n");



if(renaultSayisi > mazdaSayisi && renaultSayisi> hondaSayisi && renaultSayisi>fordSayisi)
{
printf("En �ok gelen ara� markas� Renault (%d)", renaultSayisi);

}
else if (mazdaSayisi>hondaSayisi && mazdaSayisi > fordSayisi)
{
printf("En �ok gelen ara� markas� MAzda (%d)", mazdaSayisi);
}
else if(hondaSayisi> fordSayisi)
{
printf("En �ok gelen ara� markas� Honda (%d)", hondaSayisi);
}
else
printf("En �ok gelen ara� markas� Ford (%d)", fordSayisi);


if(renaultTutar > mazdaTutar && renaultTutar> hondaTutar && renaultTutar>fordTutar)
{
printf("\nEn �ok sat�� yap�lan marka Renault (%.2f)", renaultTutar);
}
else if (mazdaTutar>hondaTutar && mazdaTutar > fordTutar)
{
printf("\nEn �ok sat�� yap�lan marka Mazda (%.2f)", mazdaTutar);
}
else if(hondaTutar> fordTutar)
{
printf("\nEn �ok sat�� yap�lan marka Honda (%.2f)", hondaTutar);
}
else
printf("\nEn �ok sat�� yap�lan marka Ford (%.2f)", fordTutar);


return 0 ;

}
