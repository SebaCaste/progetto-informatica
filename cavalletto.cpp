#include "cavalletto.h"

Cavalletto::Cavalletto(string _mar,string _mat){
	marca=_mar;
	materiale=_mat;
}

Cavalletto::~Cavalletto(){}

void Cavalletto::stampa(){
	cout<<*this<<endl;
}
void Cavalletto::set_cavalletto(string _mar,string _mat){
	marca=_mar;
	materiale=_mat;
}
ostream& operator<<(ostream& os,Cavalletto c){
	os<<c.marca<<"  "<<c.materiale;
	return os;
}

void test_cavalletto(){
	Cavalletto c("SAMSUNG","Plastica");
	cout<<" con stampa ";c.stampa();
	cout<<"con ostream "<<c;
}

