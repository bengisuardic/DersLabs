#include "ameliyathane.h"
#include <iostream>
using namespace std;

Ameliyathane::Ameliyathane (char d[20], char k[20]){
	 ad[20] = d[20];
	 grup[20] = k[20];
}
Ameliyathane::Ameliyathane(){
	for (int i=0;i<6;i++){
		for (int j=0;j<7;j++){
			program [i][j] = 0;
		}
	}
}
int Ameliyathane::getBoslukSayisi(){
	int k;
		for (int i=0;i<6;i++){
		for (int j=0;j<7;j++){
			if(program [i][j] == 0){
				k++;
			}
		}
	}
	return 42-k;
}
Ameliyathane dahaVerimli(Ameliyathane b,Ameliyathane a){
	if(a.getBoslukSayisi()<b.getBoslukSayisi())
	     return a;	
	else
	     return b;
}
bool Ameliyathane::operator != (Ameliyathane b,Ameliyathane a){
	if(a.program!=b.program)
	    return true;
	else
	    return false;
}
void Ameliyathane::setOperasyon(int gun, int periyot){
	program[periyot][gun] = program [p][g];
	
}
void Ameliyathane::programYaz(){
	cout<<        "Pt"<< "Sl"<< "Cr"<< "Pr"<< "Cm"<< "Ct"<< "Pz";
	for (int i=0;i<6;i++){
		cout<<" . periyot"<<i;
		for(int j=0;j<7;j++){
		   cout<<" "<<program[6][7]<<" "<<endl;	
		}
	}
}
bool Ameliyathane::periyottaBoslukVarMi(int periyot){
		for (int i=0;i<6;i++){
		for (int j=0;j<7;j++){
			if(program [i][j] == 0){
			     return true;
			}
			else{
				return false;
			}
		}
	}
	
}

