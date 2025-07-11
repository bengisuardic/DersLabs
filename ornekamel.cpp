#include <iostream>
#include "ameliyathane.h"

int main() 
{ 
 Ameliyathane a("Z101", "Birinci grup"); 
 Ameliyathane b("Z102", "�kinci grup"), c; 
 a.setOperasyon(1,0);//Z101�in Sal� 1. periyodunu doldur
 b.setOperasyon(4,2);//Z102�nin Cuma 3. periyodunu doldur
 b.setOperasyon(4,5);//Z102�nin Cuma son periyodunu doldur 
 
 a.programYaz();// Z101�in program�n� yazd�r
 cout<<"Z101�deki bo�luk say�s� :"; 
 a.getBoslukSayisi();
 //Z101�in ilk periyodunda bo�luk var m�? 
 if(a.periyottaBoslukVarMi(0)==true) 
 cout<<"Z101�in ilk periyodunda bo�luk var"<<endl; 
 
 //Z101 ile Z102�nin operasyon program� farkl� m�? 
 if(operator != (Ameliyathane b,Ameliyathane a)) 
 cout<<"Z101 ve Z102�nin program� farkl�"<<endl; 
 c =Ameliyathane dahaVerimli(Ameliyathane b,Ameliyathane a);
//Z101 ve Z102�den daha verimli olan� C ye aktar
 cout<<"Daha verimli olan:"<<endl; 
 c.programYaz();//c nin program�n� yazd�r 
 return 0; 
}
