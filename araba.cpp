
#include<stdio.h>
int main ()
{
int markaKodu=0, mazdaSayisi=0, renaultSayisi=0, hondaSayisi=0, fordSayisi=0;
float tutar=0, mazdaTutar=0, renaultTutar=0, hondaTutar=0, fordTutar=0;

printf("PROGRAMDAN ÇIKMAK ÝÇÝN 111 GÝRÝNÝZ\n");
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
printf("Yanlýþ marka girdiniz");
break;
}
printf("\nMarka,tutar giriniz:");
scanf("%d\t", &markaKodu );
scanf("%f", &tutar );
}

printf("PROGRAM SONA ERDÝ\n");
printf("ÖZET BÝLGÝLER\n");



if(renaultSayisi > mazdaSayisi && renaultSayisi> hondaSayisi && renaultSayisi>fordSayisi)
{
printf("En çok gelen araç markasý Renault (%d)", renaultSayisi);

}
else if (mazdaSayisi>hondaSayisi && mazdaSayisi > fordSayisi)
{
printf("En çok gelen araç markasý MAzda (%d)", mazdaSayisi);
}
else if(hondaSayisi> fordSayisi)
{
printf("En çok gelen araç markasý Honda (%d)", hondaSayisi);
}
else
printf("En çok gelen araç markasý Ford (%d)", fordSayisi);


if(renaultTutar > mazdaTutar && renaultTutar> hondaTutar && renaultTutar>fordTutar)
{
printf("\nEn çok satýþ yapýlan marka Renault (%.2f)", renaultTutar);
}
else if (mazdaTutar>hondaTutar && mazdaTutar > fordTutar)
{
printf("\nEn çok satýþ yapýlan marka Mazda (%.2f)", mazdaTutar);
}
else if(hondaTutar> fordTutar)
{
printf("\nEn çok satýþ yapýlan marka Honda (%.2f)", hondaTutar);
}
else
printf("\nEn çok satýþ yapýlan marka Ford (%.2f)", fordTutar);


return 0 ;

}
