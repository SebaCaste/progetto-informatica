#ifndef _STABILIZZATORE_
#define _STABILIZZATORE_

#include <iostream>
using namespace std;

class Stabilizzatore{
	private:
		string marca;
		int nAssi;
	public:
		Stabilizzatore(string _ma,int n);
		~Stabilizzatore();
		void stampa();
		friend ostream& operator<<(ostream& os,Stabilizzatore s);	
};

void test_stabilizzatore();
ostream& operator<<(ostream& os,Stabilizzatore s);

#endif

