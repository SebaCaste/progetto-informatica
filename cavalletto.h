#ifndef __CAVALLETTO__
#define __CAVALLETTO__

using namespace std;
#include <iostream>

class Cavalletto{
	private:
		string marca;
		string materiale;
	public:
		Cavalletto(string _mar="null",string _mat="null");
		~Cavalletto();
		void stampa();
		friend ostream& operator<<(ostream& os,Cavalletto c);	
		
};

ostream& operator<<(ostream& os,Cavalletto c);
void test_cavalletto();

#endif


