#include "Repo.h"

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
