#include <ostream>
#include <string>
#include <stdlib.h>
#include <istream>
#include <iostream>
#include <fstream>

using namespace std;
#ifndef ZBOR_H
#define ZBOR_H
class Rezervare {
private:
	// Ceea din ce este constituit examenul (tip sir de caractere ->nume,tip int data si nota*)
	char* nume;
	int nr_zbor;
	int nr_loc;

public:
	// constructor fara parametrii(explicit se mai numeste daca nu gresesc)
	Rezervare();
	// constructor cu parametrii
	Rezervare(const char*, int, int);
	// constructor de copiere
	Rezervare(const Rezervare&);
	Rezervare(string);
	//Rezervare(string);//constructor de conversie
	char* getNume();
	int getNrZbor();
	int getNrLoc();
	// Setteri 
	void setNume(const char*);
	void setNrZbor(int);
	void setNrLoc(int);
	// Destructorul (Dupa ce te folosesti de ceva si numai ai absolut nevoie de el ->se va sterge ,cam asta e traducerea)
	~Rezervare();
	// operator de atribuire
	Rezervare& operator=(const Rezervare&);
	// Compara 2 examene!(Intr-un fel si asta poate fi ca cei de mai sus!)
	bool operator==(const Rezervare& e);
	// Compara 2 examene!(Intr-un fel si asta poate fi ca cei de mai sus!)
	bool operator!=(const Rezervare& e);
	// Operator folosit doar pentru a specifia ca nota e1 != nota e2
	bool compare(Rezervare& e);
	bool operator<(const Rezervare&);
	bool operator>(const Rezervare&);
	char* toString();
	friend ostream& operator<<(ostream&, Rezervare);
	friend istream& operator>>(istream&, Rezervare&);
	friend ifstream& operator>>(ifstream&, Rezervare&);
	friend ofstream& operator<<(ofstream&, Rezervare&);
};

#endif
