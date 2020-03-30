#include <iostream>
#include <assert.h>
#include "TesteRepo.h"
#include "Booking.h"
#include "Repo.h"


using namespace std;

void TesteRepo()
{
	Repo<Booking> r;

	Booking b1("Andi", 100, 1);
	Booking b2("Ion", 200, 2);
	Booking b3("George", 300, 5);

	// Test AddElem si GetAll
	r.AddElem(b1);
	r.AddElem(b2);
	r.AddElem(b3);

	list<Booking> bookings = r.GetAll();
	
	assert(bookings.size() == 3);

	cout << "Testele pentru Repo au trecut cu succes!" << endl;

}