#ifndef _MEMORIA_
#define _MEMORIA_
enum TipoMemoria{usb,sd,microSd};

class Memoria{
	private:
		int capacita;
		TipoMemoria tipo;
	public:
		Memoria(int _cap,TipoMemoria _tipo);
		~Memoria();
		void stampa();
};

void test_memoria();

#endif

