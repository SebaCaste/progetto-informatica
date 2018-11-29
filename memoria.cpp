
//MEMORIA FINITO

#include "memoria.h"
using namespace std;
#include <iostream>


Memoria::Memoria(int _cap,TipoMemoria _tipo){
	capacita=_cap;
	tipo=_tipo;	
}
Memoria::~Memoria(){

}
void Memoria:: set_memoria(int _capacita,TipoMemoria _tipo){
	capacita=_capacita;
	tipo=_tipo;
}
void Memoria::stampa(){
	cout<<*this<<endl;
}

void test_memoria(){
	Memoria mem(32,usb);
	mem.stampa();
	cout<<mem<<endl;
}

ostream& operator<<(ostream& os,Memoria m){
	os<<m.capacita<<"Gb - ";
	switch(m.tipo){
		case usb: os<<" USB ";break;
		case sd: os<<" SD ";break;
		case microSd: os<<" micro sd ";break;	
	}
	return os;
}
