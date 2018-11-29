
#ifndef __ACCESSORI__
#define __ACCESSORI__

#include <iostream>
using namespace std;

#include "memoria.h"
#include "cavalletto.h"
#include "stabilizzatore.h"

class Accessori{
	private:
		Memoria memoria[5];
		Stabilizzatore stabilizzatore[2];
		Cavalletto cavalletto[2];
		int m,s,c;//contatori degli array
	public:
		Accessori();
		~Accessori();
		void add_cavalletto(string _marca,string _materiale);
		void add_stabilizzatore(string _marca,int _nAssi);
		void add_memoria(int _cap,TipoMemoria _ti);
		void stampa();
		friend ostream& operator<<(ostream& os, Accessori a);		
};

ostream& operator<<(ostream& os, Accessori a);
void test_accessori();


#endif

