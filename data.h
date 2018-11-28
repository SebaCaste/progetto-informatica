//DATA FINITO
#ifndef _DATA_
#define _DATA_

using namespace std;
#include <iostream>

class Data{
	private:
		int giorno;
		int mese;
		int anno;
	public:
		Data(int g=0,int m=0,int a=0);
		~Data();
		void stampa();
		void set_data(int g,int m,int a);
		friend ostream& operator<<(ostream& os, Data a);
};

ostream& operator<<(ostream& os, Data a);
void test_data();
#endif
