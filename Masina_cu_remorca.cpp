#include "Masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca():Remorca(), Masina(), masa_totala(0), Vehicul()
{
	//cout << "Masina_cu_remorca: Constructor fara parametri" << endl;
}

Masina_cu_remorca::Masina_cu_remorca(int masa_totala, const int dimensiuni[], int greutate_maxima, const int dimens[], const char* marca, const char* proprietar, int pret):Remorca(dimensiuni, greutate_maxima, proprietar, pret), Masina(dimens, marca, proprietar, pret), masa_totala(masa_totala), Vehicul(proprietar, pret)
{
	//cout << "Masina_cu_remorca: Constructor cu parametri" << endl;
}

Masina_cu_remorca::Masina_cu_remorca(const Masina_cu_remorca& obj)
{
	*this = obj;
}

Masina_cu_remorca& Masina_cu_remorca::operator=(const Masina_cu_remorca& obj)
{
	(Vehicul&)(*this) = obj;
	(Remorca&)(*this) = obj;
	this->masa_totala = obj.masa_totala;
	return *this;
}

int Masina_cu_remorca::getMasaTotala() const
{
	return masa_totala;
}

bool Masina_cu_remorca::operator>(const Masina_cu_remorca& obj)
{
	return(this->getMasaTotala() > obj.getMasaTotala());
}

bool Masina_cu_remorca::operator<(const Masina_cu_remorca& obj)
{
	return(this->getMasaTotala() < obj.getMasaTotala());
}

Masina_cu_remorca& Masina_cu_remorca::operator+(Masina_cu_remorca& obj)
{
	this->greutate_maxima = this->greutate_maxima + obj.greutate_maxima;
	return (*this);
}

Masina_cu_remorca& Masina_cu_remorca::operator-(Masina_cu_remorca& obj)
{
	this->greutate_maxima = this->greutate_maxima - obj.greutate_maxima;
	return (*this);
}

void Masina_cu_remorca::afisare()
{
	Masina::afisare();
	cout << "Masa totala: " << masa_totala << endl;
	cout << "Dimensiuni remorca(lungime, latime, inaltime): " << endl;
	Remorca::getDimensiuneRemorca();
	cout << "Greutate maxima remorca: " << Remorca::getGreutateMax() << endl;	
}
