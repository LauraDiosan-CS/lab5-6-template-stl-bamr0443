#pragma once

#include <iostream>
using namespace std;

class Booking
{
private:
	char* nume;
	int numarZbor;
	int numarClient;

public:
	Booking();
	Booking(const char* Nume, int NumarZbor, int NumarClient);
	~Booking();

	char* GetNume();
	int GetNumarZbor();
	int GetNumarClient();

	void SetNume(const char* Nume);
	void SetNumarZbor(int NumarZbor);
	void SetNumarClient(int NumarClient);

	// Pt afisare
	friend ostream& operator<<(ostream& os, const Booking& p);

	// Operator atribuire (=)
	Booking& operator=(const Booking& other);
};

