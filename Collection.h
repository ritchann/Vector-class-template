#pragma once
#include "Iterator.h"

template<class T>
class Collection
{
public:
	Collection();
	virtual ~Collection();
	virtual void Add(T) = 0;
	virtual int Find(T) = 0;
	virtual void Delete(T) = 0;
	virtual void DeleteAll()  = 0;
};

template<class T>
Collection<T>::Collection()
{
}

template<class T>
Collection<T>::~Collection()
{
}
