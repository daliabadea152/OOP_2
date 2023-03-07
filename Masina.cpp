#include "Masina.hpp"

Masina::Masina():Vehicul(), marca(NULL)
{
	//cout << "Masina: Constructor fara parametri" << endl;
	for(int i = 0; i<3; i++)
	{
		dimensiuni[i] = 0;
	}
}

Masina::Masina(const int dimensiuni[], const char* marca, const char* proprietar, int pret):Vehicul(proprietar, pret)
{
	//cout << "Masina: Constructor cu parametri" << endl;
	for(int i = 0; i<3; i++)
	{
		this->dimensiuni[i] = dimensiuni[i];
	}
	
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca, marca);
}

Masina::Masina(const Masina& obj)
{
	marca = NULL;
	*this = obj;
}

Masina& Masina::operator=(const Masina& obj)
{
	(Vehicul&)(*this) = obj;
	if(this != &obj)
	{
		if(marca != NULL)
		{
		  delete []marca;
	    }
		if(obj.marca == NULL)
		  marca = NULL;
		else 
		{
		  this->marca = new char[strlen(obj.marca) + 1];
		  strcpy(this->marca, obj.marca);
		}
	}
	
	for(int i = 0; i<3; i++)
	{
		this->dimensiuni[i] = obj.dimensiuni[i];
	}
	
	return *this;
}

void Masina::afisare()
{
	Vehicul::afisare();
	cout << "Dimensiuni masina(lungime, latime si inaltime): " << endl;
	for(int i = 0; i<3; i++)
	{
		cout << dimensiuni[i] << endl;
	}
	cout << "Marca masina: " << marca << endl;
}

Masina::~Masina()
{
	delete []marca;
}
