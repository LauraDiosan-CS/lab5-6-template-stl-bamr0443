#include <iostream>
#include "Booking.h"

using namespace std;

Booking::Booking()
{
	nume = NULL;
	numarZbor = 0;
	numarClient = 0;
}

Booking::Booking(const char* Nume, int NumarZbor, int NumarClient)
{
	nume = new char[strlen(Nume) + 1];
	strcpy_s(nume, strlen(Nume) + 1, Nume);

	numarZbor = NumarZbor;
	numarClient = NumarClient;
}

Booking::~Booking()
{
	if (nume != NULL)
		delete[] nume;
}

char* Booking::GetNume()
{
	return nume;
}

int Booking::GetNumarZbor()
{
	return numarZbor;
}

int Booking::GetNumarClient()
{
	return numarClient;
}

void Booking::SetNume(const char* Nume)
{
	if (nume != NULL)
		delete[] nume;
	nume = new char[strlen(Nume) + 1];
	strcpy_s(nume, strlen(Nume) + 1, Nume);
}

void Booking::SetNumarZbor(int NumarZbor)
{
	numarZbor = NumarZbor;
}

void Booking::SetNumarClient(int NumarClient)
{
	numarClient = NumarClient;
}

Booking& Booking::operator=(const Booking& other)
{
	SetNume(other.nume);
	SetNumarClient(other.numarClient);
	SetNumarZbor(other.numarZbor);

	return *this;
}

ostream& operator<<(ostream& os, const Booking& p)
{
	os << p.nume << endl;
	os << p.numarZbor << endl;
	os << p.numarClient << endl;

	return os;
}
