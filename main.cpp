#include "Masina_cu_remorca.hpp"

int main()
{
	Vehicul **v;
	const int dimensiune_remorca[3] = {15, 20, 40};
	const int dimensiune_remorca1[3] = {20, 60, 80};
	const int dimensiune_remorca2[3] = {45, 65, 86};
	const int dimensiune_masina[3] = {100, 200, 300};
	const int dimensiune_masina1[3] = {187, 205, 308};
	const int dimensiune_masina2[3] = {234, 287, 500};
	
	int size;
	size = 5;
	v = new Vehicul*[size];
	v[0] = new Vehicul("Dalia", 2000);
	v[1] = new Remorca(dimensiune_remorca, 400, "Badea", 500);
	v[2] = new Masina(dimensiune_masina, "VW", "Popescu", 1800);
	v[3] = new Masina_cu_remorca(1750, dimensiune_remorca, 900, dimensiune_masina, "Audi", "Ionescu", 1700);
	v[4] = new Vehicul("Maria", 2300);
	
	cout << "Afisare elemente vector: " << endl << endl;
	for(int i = 0; i < size; i++)
	{
		v[i]->afisare();
		cout << endl;
	}
	cout << endl;
	
	int ok;
	ok = 1;
	while(ok == 1)
	{
		ok = 0;
		for(int i = 0; i < size-1; i++)
		  if(v[i]->getPret() > v[i+1]->getPret())
		{
		  Vehicul *temp;
		  temp = v[i];
		  v[i] = v[i+1];
		  v[i+1] = temp;
		  ok = 1;
	    }
	}
	
	cout << "Afisare vector sortat dupa pret: " << endl << endl;
	for(int i = 0; i < size; i++)
	{
		v[i]->afisare();
		cout << endl;
	}
	cout << endl;
	
	cout << "Obiecte de tip Masina_cu_remorca: " << endl << endl;
	Masina_cu_remorca v1(1950, dimensiune_remorca1, 915, dimensiune_masina1, "BMW", "Enescu", 3500);
	Masina_cu_remorca v2(1840, dimensiune_remorca2, 870, dimensiune_masina2, "Tesla", "Ene", 4700);
	v1.afisare();
	cout << endl;
	v2.afisare();
	
	cout << endl;
	cout << "Operator <: " << (v2 < v1) << endl;
	cout << "Operator >: " << (v2 > v1) << endl;
	cout << endl;
	
	v1 = v1 + v2;
	v1.afisare();
	cout << endl;
	
	v1 = v1 - v2;
	v1.afisare();
	
	delete []v;
	return 0;
}
