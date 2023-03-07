#include "Remorca.hpp"

Remorca::Remorca():Vehicul(), greutate_maxima(0)
{
	//cout << "Remorca: Constructor fara parametri" << endl;
	for(int i = 0; i<3; i++)
	{
		dimensiuni[i] = 0;
	}
}

Remorca::Remorca(const int dimensiuni[], int greutate_maxima, const char *proprietar, int pret):greutate_maxima(greutate_maxima), Vehicul(proprietar, pret)
{
	//cout << "Remorca: Constructor cu parametri" << endl;
	for(int i = 0; i<3; i++)
	{
		this->dimensiuni[i] = dimensiuni[i];
	}
}

int Remorca::getGreutateMax()
{
	return greutate_maxima;
}

void Remorca::getDimensiuneRemorca()
{
	for(int i = 0; i<3; i++)
	{
		cout << dimensiuni[i] << endl;
	}
}

void Remorca::afisare()
{
	Vehicul::afisare();
	cout << "Dimensiuni remorca(lungime, latime, inaltime): " << endl;
	for(int i = 0; i<3; i++)
	{
		cout << dimensiuni[i] << endl;
	}
	cout << "Greutate maxima remorca: " << greutate_maxima << endl;
}

Remorca::~Remorca()
{
	//cout << "Remorca: Destructor" << endl;
}
