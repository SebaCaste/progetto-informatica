#ifndef __ACCESSORI__
#define __ACCESSORI__

#include "memoria.h"
#include "cavalletto.h"
#include "stabilizzatore.h"

class Accessori{
	private:
		vector<Memoria> memoria;
		vector<Stabilizzatore> stabilizzatore;
		vector<Cavalletto> cavalletto;
	public:
		Accessori();
		~Accessori();
		void stampa();
		friend ostream& operator<<(ostream& os, Accessori a);		
};

ostream& operator<<(ostream& os, Accessori a);
void test_accessori();


#endif

