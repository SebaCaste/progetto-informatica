#include "stabilizzatore.h"

Stabilizzatore::Stabilizzatore(string _ma,int n){
	marca=_ma;
	nAssi=n;
}
Stabilizzatore::~Stabilizzatore(){}

void Stabilizzatore::stampa(){
	cout<<*this<<endl;
}

void test_stabilizzatore(){
	Stabilizzatore s("ASUS", 3);
	cout<<"con ostream "<<s<<endl;	
	cout<<"con stampa ";s.stampa();
}

ostream& operator<<(ostream& os,Stabilizzatore s){
	os<<"Stabilizzatore ::"<<s.marca<<" con "<<s.nAssi;
	return os;
}

