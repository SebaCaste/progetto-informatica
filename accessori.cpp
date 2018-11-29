#include "accessori.h"

Accessori::Accessori(){
}
Accessori::~Accessori(){
}
void Accessori::add_cavalletto(string _marca,string _materiale){
		if(c<2){
		cavalletto[c]=Cavalletto(_marca,_materiale);
	}
	else{
		cout<<"hai troppi cavalletti "<<endl;
	}
}
void Accessori::add_stabilizzatore(string _marca,int _nAssi){
		if(s<2){
		stabilizzatore[c]=Stabilizzatore(_marca,_nAssi);
	}
	else{
		cout<<"hai troppi stabilizzatori "<<endl;
	}
}
void Accessori::add_memoria(int _cap,TipoMemoria _ti){
	if(m<5){
		memoria[m]=Memoria(_cap,_ti);
		m++;
	}
	else{
		cout<<"hai troppe memorie "<<endl;
	}
}

void Accessori::stampa(){
	cout<<*this;
}
ostream& operator<<(ostream& os, Accessori a){
}




