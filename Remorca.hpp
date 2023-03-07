#ifndef REMORCA_HPP
#define REMORCA_HPP

#include "Vehicul.hpp"

class Remorca: virtual public Vehicul {
	protected:
	int dimensiuni[3]; //lungime, latime, inaltime
	int greutate_maxima;
	
public:
	Remorca();
	Remorca(const int[], int, const char*, int);
	
	int getGreutateMax();
	void afisare();
	void getDimensiuneRemorca();
	~Remorca();	
};

#endif
