#pragma once

#include <list>

using namespace std;

template<class Elem>
class Repo
{
private:
	list<Elem> elems;

public:
	Repo();
	~Repo();

	void AddElem(Elem& elem);
	list<Elem> GetAll();
};

template<class Elem>
Repo<Elem>::Repo()
{
}

template<class Elem>
Repo<Elem>::~Repo()
{
}

template<class Elem>
void Repo<Elem>::AddElem(Elem& elem)
{
	elems.push_back(elem);
}

template<class Elem>
list<Elem> Repo<Elem>::GetAll()
{
	return elems;
}


