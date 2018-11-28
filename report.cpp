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
void test_report(){
	Report re;
	re.set_report(28,11,2018,156,1024);
	re.stampa();
}
ostream& operator<<(ostream& os,Report r){
	os<<"#foto :"<<r.nFoto<<" gigabite :"<<r.memoria<<endl;
	return os;
}
