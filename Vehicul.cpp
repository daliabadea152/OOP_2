#include "Vehicul.hpp"

Vehicul::Vehicul():proprietar(NULL), pret(0)
{
	//cout << "Vehicul: Constructor fara parametri" << endl;
}

Vehicul::Vehicul(const char *proprietar, int pret): pret(pret)
{
	//cout << "Vehicul: Constructor cu parametri" << endl;
	this->proprietar = new char[strlen(proprietar) + 1];
	strcpy(this->proprietar, proprietar);
}

Vehicul::Vehicul(const Vehicul& obj)
{
	//cout << "Vehicul: Constructor de copiere" << endl;
	proprietar = NULL;
	*this = obj;
}

Vehicul& Vehicul::operator=(const Vehicul& obj)
{
	if(this != &obj)
	{
		if(this->proprietar != NULL)
			delete []this->proprietar;
        pret = obj.pret;
		this->proprietar = new char[strlen(obj.proprietar) + 1];
		strcpy(this->proprietar, obj.proprietar);
	}
	
	return *this;
}

int Vehicul::getPret()
{
	return pret;
}

void Vehicul::afisare()
{
	cout << "Nume proprietar: " << proprietar << endl;
	cout << "Pret vehicul: " << pret << endl;
}

Vehicul::~Vehicul()
{
	delete []proprietar;
}
