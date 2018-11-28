#include "report.h"

Report::Report(){
}
Report::~Report(){
}
void Report::stampa(){
	dataConsegna.stampa();
	cout<<*this;
}
void Report::set_report(int _g,int _m,int _a,int _nFoto,int _mem){
	dataConsegna.set_data(_g,_m,_a);
	nFoto=_nFoto;
	memoria=_mem;
}
ostream& operator<<(ostream& os,Report r){
	os<<"#foto"<<r.nFoto<<"gigabite: "<<r.memoria<<endl;
	return os;
}
