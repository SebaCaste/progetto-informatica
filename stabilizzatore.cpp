#include "stabilizzatore.h"

Stabilizzatore::Stabilizzatore(string _ma,int n){
	marca=_ma;
	nAssi=n;
}
Stabilizzatore::~Stabilizzatore(){}

void Stabilizzatore::stampa(){
	
}

void test_stabilizzatore(){
	Stabilizzatore s("ASUS", 3);
	cout<<s;	
}

ostream& operator<<(ostream& os,Stabilizzatore s){
	cout<<"Stabilizzatore ::"<<s.marca<<" con "<<s.nAssi<<endl;
}

