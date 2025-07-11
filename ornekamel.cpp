#include <iostream>
#include "ameliyathane.h"

int main() 
{ 
 Ameliyathane a("Z101", "Birinci grup"); 
 Ameliyathane b("Z102", "Ýkinci grup"), c; 
 a.setOperasyon(1,0);//Z101’in Salý 1. periyodunu doldur
 b.setOperasyon(4,2);//Z102’nin Cuma 3. periyodunu doldur
 b.setOperasyon(4,5);//Z102’nin Cuma son periyodunu doldur 
 
 a.programYaz();// Z101’in programýný yazdýr
 cout<<"Z101’deki boþluk sayýsý :"; 
 a.getBoslukSayisi();
 //Z101’in ilk periyodunda boþluk var mý? 
 if(a.periyottaBoslukVarMi(0)==true) 
 cout<<"Z101’in ilk periyodunda boþluk var"<<endl; 
 
 //Z101 ile Z102’nin operasyon programý farklý mý? 
 if(operator != (Ameliyathane b,Ameliyathane a)) 
 cout<<"Z101 ve Z102’nin programý farklý"<<endl; 
 c =Ameliyathane dahaVerimli(Ameliyathane b,Ameliyathane a);
//Z101 ve Z102’den daha verimli olaný C ye aktar
 cout<<"Daha verimli olan:"<<endl; 
 c.programYaz();//c nin programýný yazdýr 
 return 0; 
}
