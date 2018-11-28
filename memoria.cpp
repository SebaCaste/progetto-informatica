#include "memoria.h"
using namespace std;
#include <iostream>


Memoria::Memoria(int _cap,TipoMemoria _tipo){
	capacita=_cap;
	switch(_tipo){
		case('usb'): ;break;
		case('USB'): cout<<" USB ";break;
		case('SD'): cout<<" SD ";break;
		case('sd'): cout<<" SD ";break;
		case('microusb'): cout<<" micro USB ";break;
		case('MICROUSB'): cout<<" micro USB ";break;		
	}
	tipo=_tipo;	
}
Memoria::~Memoria(){

}

void Memoria::stampa(){
	cout<<"Memoria:: "<<capacita<<"Gb - ";
	switch(tipo){
		case('usb'): cout<<" USB ";break;
		case('USB'): cout<<" USB ";break;
		case('SD'): cout<<" SD ";break;
		case('sd'): cout<<" SD ";break;
		case('microusb'): cout<<" micro USB ";break;
		case('MICROUSB'): cout<<" micro USB ";break;		
	}
	cout<<endl;
}

void test_memoria(){
	Memoria mem(32,usb);
	mem.stampa();
}
