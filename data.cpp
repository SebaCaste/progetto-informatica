//DATA FINITO
#include "data.h"

Data::Data(int g,int m,int a){
	giorno =g;
	mese=m;
	anno=a;
	}
Data::~Data(){
}
void Data::stampa(){
	cout<<*this;
}
ostream& operator<<(ostream& os, Data a){
	os<<"data: "<<a.giorno<<"/"<<a.mese<<"/"<<a.anno<<endl;
	return os;
}
void Data::set_data(int g,int m,int a){
	giorno=g;
	mese=m;
	anno=a;
}
void test_data(){
	Data a(28,11,2018);
	a.stampa();
}
