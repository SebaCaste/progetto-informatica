
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

void Memoria::stampa(){
	cout<<"Memoria:: "<<capacita<<"Gb - ";
	switch(tipo){
		case usb: cout<<" USB ";break;
		case sd: cout<<" SD ";break;
		case microSd: cout<<" micro sd ";break;	
	}
	cout<<endl;
}

void test_memoria(){
	Memoria mem(32,usb);
	mem.stampa();
}

ostream& operator<<(ostream& os,Memoria m){
	cout<<"Memoria:: "<<m.capacita<<"Gb - ";
	switch(m.tipo){
		case usb: cout<<" USB ";break;
		case sd: cout<<" SD ";break;
		case microSd: cout<<" micro sd ";break;	
	}
	cout<<endl;
}
