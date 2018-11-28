
// MEMORIA FINITO

#ifndef _MEMORIA_
#define _MEMORIA_
enum TipoMemoria{usb,sd,microSd};

using namespace std;
#include <iostream>

class Memoria{
	private:
		int capacita;
		TipoMemoria tipo;
	public:
		Memoria(int _cap,TipoMemoria _tipo);
		~Memoria();
		void stampa();
		friend ostream& operator<<(ostream& os,Memoria m);
};

void test_memoria();
ostream& operator<<(ostream& os,Memoria m);

#endif

