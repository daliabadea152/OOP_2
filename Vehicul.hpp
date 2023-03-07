#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Vehicul {
	
	char *proprietar;
	int pret;

public:
	Vehicul();
	Vehicul(const char*, int);
	Vehicul& operator=(const Vehicul&);
	Vehicul(const Vehicul&);
	
	int getPret();
    virtual void afisare();
	~Vehicul();
};

#endif
