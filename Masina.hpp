#ifndef MASINA_HPP
#define MASINA_HPP

#include "Vehicul.hpp"

class Masina: virtual public Vehicul {
	protected:
	int dimensiuni[3]; //lungime, latime, inaltime
	char *marca;
	
public:
	Masina();
	Masina(const int[], const char*, const char*, int);
	Masina(const Masina&);
	Masina& operator=(const Masina&);
	
	void afisare();
	~Masina();
};

#endif
