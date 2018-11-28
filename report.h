#ifndef _REPORT_
#define _REPORT_
#include "data.h"

#include <iostream>

using namespace std;

class Report{
	private:
		Data dataConsegna;
		int nFoto;
		int memoria; 
	public:
		Report();
		~Report();
		void stampa();
		void set_report(int _g,int _m,int _a,int _nFoto,int _mem);
		friend  ostream& operator<<(ostream& os,Report r);
};

#endif

