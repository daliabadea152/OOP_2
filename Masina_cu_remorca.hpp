#ifndef MASINA_CU_REMORCA_HPP
#define MASINA_CU_REMORCA_HPP

#include "Masina.hpp"
#include "Remorca.hpp"

class Masina_cu_remorca: public Remorca, public Masina {
	protected:
	int masa_totala; //fara incarcatura

public:
	Masina_cu_remorca();
	Masina_cu_remorca(int, const int[], int, const int[], const char*, const char*, int);
	Masina_cu_remorca(const Masina_cu_remorca&);
	Masina_cu_remorca& operator=(const Masina_cu_remorca&);
	
	int getMasaTotala() const;
	bool operator<(const Masina_cu_remorca&);
	bool operator>(const Masina_cu_remorca&);
	Masina_cu_remorca& operator+(Masina_cu_remorca&);
	Masina_cu_remorca& operator-(Masina_cu_remorca&);
	void afisare();
};

#endif
