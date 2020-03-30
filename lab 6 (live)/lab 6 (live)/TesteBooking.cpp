#include <iostream>
#include <assert.h>
#include "TesteBooking.h"
#include "Booking.h"

using namespace std;

void TesteBooking()
{
	// Teste constructor cu parametri
	Booking b1("Andi", 10, 1);

	assert(strcmp(b1.GetNume(), "Andi") == 0);
	assert(b1.GetNumarZbor() == 10);
	assert(b1.GetNumarClient() == 1);

	// Teste constructor fara parametri
	Booking b2;

	assert(b2.GetNume() == NULL);
	assert(b2.GetNumarZbor() == 0);
	assert(b2.GetNumarClient() == 0);

	// Teste setteri
	Booking b3("Ion", 100, 10);
	// setter pt nume
	assert(strcmp(b3.GetNume(), "Ion") == 0);
	b3.SetNume("Gabriel");
	assert(strcmp(b3.GetNume(), "Gabriel") == 0);

	// setter pt numarzbor
	assert(b3.GetNumarZbor() == 100);
	b3.SetNumarZbor(200);
	assert(b3.GetNumarZbor() == 200);

	// setter pt numarclient
	assert(b3.GetNumarClient() == 10);
	b3.SetNumarClient(50);
	assert(b3.GetNumarClient() == 50);

	cout << "Testele pentru Booking au trecut cu succes!" << endl;
}
