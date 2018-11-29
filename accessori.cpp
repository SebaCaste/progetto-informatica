#include "accessori.h"
using namespace std;
Accessori::Accessori(){
	m=0;c=0;s=0;
}
Accessori::~Accessori(){
}
void Accessori::add_cavalletto(string _marca,string _materiale){
		if(c<2){
		cavalletto[c]=Cavalletto(_marca,_materiale);
		c++;
	}
	else{
		cout<<"hai troppi cavalletti "<<endl;
	}
}
void Accessori::add_stabilizzatore(string _marca,int _nAssi){
		if(s<2){
		stabilizzatore[s]=Stabilizzatore(_marca,_nAssi);
		s++;
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
void test_accessori(){
	Accessori a;
	cout<<a;
	a.add_cavalletto("bella","duro");
	a.add_memoria(100,usb);
	a.add_stabilizzatore("brutta",5);
	cout<<a;
	
}
void Accessori::stampa(){
	cout<<*this;
}
ostream& operator<<(ostream& os, Accessori a){
	for(int i=0;i<a.m;i++){
	os<<a.memoria[i]<<endl;
	}
	for(int i=0;i<a.s;i++){
	os<<a.stabilizzatore[i]<<endl;
	}
	for(int i=0;i<a.c;i++){
	os<<a.cavalletto[i]<<endl;
	}
}




