#pragma once
#include <list>
#include <iostream>
#include "Rezervare.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;
template <class Elem>
class Repo
{
protected:
	list<Elem> elemente;
public:
	Repo();
	~Repo();
	void addElem(Elem&);
	// aici la Elem se poate pune referinta..dar am scos-o pentru a putea face in testRepoFile repo.add(Rezervare(..));
	list<Elem>& GetAll();
	__int64 getSize();
	void del(Elem&);
	// aici la Elem se poate pune referinta..dar am scos-o pentru a putea face in testRepoFile repo.del(Rezervare(..));
	__int64 findElem(Elem);
	Elem& get(size_t _i);
	// se poate si fara referinta la elem,dar referinta ma ajuta la proprietatea 4  !!!
	//void updateElem(Elem, const char*, int,int);
	void updateElem(Elem&,Elem);
	
	


};

//template class Repo<Rezervare>;

template <class Elem>
Repo<Elem>::Repo()
{

}

template<class Elem>
Repo<Elem>::~Repo()
{
}

template<class Elem>
void Repo<Elem>::addElem(Elem& elem)
{
	
	elemente.push_back(elem);
}

template<class Elem>
list<Elem>& Repo<Elem>::GetAll()
{
	return this->elemente;
}

template<class Elem>
__int64 Repo<Elem>::getSize()
{


	return  elemente.size();
	
}


template<class Elem>
__int64 Repo<Elem>::findElem(Elem elem)
{
	typename list<Elem>::iterator it;
	it = find(elemente.begin(), elemente.end(), elem);
	if (it != elemente.end()) {
		return distance(elemente.begin(), it);
	}
	return 1323;
}

template<class Elem>
Elem& Repo<Elem>::get(size_t _i)
{
	typename list<Elem>::iterator it = elemente.begin();
	for (size_t i = 0; i < _i; i++) {
		++it;
	}
	return *it;
}


//template<class Elem>
/*
void Repo<Elem>::updateElem(Elem elem,const char* newName, int newNr, int newNrx)
{
	

	typename list<Elem>::iterator it;
	 it = find(elemente.begin(), elemente.end(), elem);
	 if (it != elemente.end()) {
		 (*it).setNume(newName);
		 (*it).setNrZbor(newNr);
		 (*it).setNrLoc(newNrx);
	 }
	 
}
*/

 template<class Elem>
 void Repo<Elem>::updateElem(Elem& elem, Elem newElem)
 {
	 typename list<Elem>::iterator it;
	 it = find(elemente.begin(), elemente.end(), elem);
	 if (it != elemente.end()) {
		 *it = newElem;
	 }

 }

 


template<class Elem>
void Repo<Elem>::del(Elem& elem)
{
	
	typename list<Elem>::iterator it;
	it = find(elemente.begin(), elemente.end(), elem);
	if (it != elemente.end()) {
		elemente.erase(it);
		
	}
	
	
}
