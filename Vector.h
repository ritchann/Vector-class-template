#pragma once
#include "iteratorVector.h"
#include "Collection.h"

template<class T>class Vector:public Collection<T>
{ 
	T* arr;
	int size;
public:
	void Add(T) override;
	int Find(T) override ;
	void Delete(T)override ;
	void DeleteAll() override;
	Vector(int n = 0) :size(n)
	{
		arr = new T[n];
	}
	T& operator[](const int& n);
	iteratorVector<T> begin();
	iteratorVector<T> end();

	~Vector();
};

template<class T>
void Vector<T>::Add(T newelem)
{
	int k = size + 1;
	size = k;
	T *newvec = new T[k];
	for (int i = 0; i < size - 1; i++)
		newvec[i] = arr[i];
	newvec[k - 1] = newelem;
	arr = newvec;
}
template<class T>
int Vector<T>::Find(T newelem)
{
	int searchIndex = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == newelem)
			searchIndex = i;
	}
	return searchIndex;
}
template<class T>
void Vector<T>::Delete(T elem)
{
	int searchIndex = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == elem)
		{
			searchIndex = i;
			i = size;
		}
	}
	size--;
	T *newvec = new T[size];
	for (int i = 0; i < searchIndex; i++)
		newvec[i] = arr[i];
	for (int i = searchIndex + 1; i < size + 1; i++)
		newvec[i - 1] = arr[i];
	arr = newvec;
}
template<class T>
void Vector<T>::DeleteAll()
{
	size = 0;
	arr = new T[size];
}
template<class T>
T& Vector<T>::operator[](const int& n)
{
	if (n > 0 && n < size)
		return arr[n];
	return arr[0];
}
template<class T>
iteratorVector<T> Vector<T>::begin()
{
	return arr;
}
template<class T>
iteratorVector<T> Vector<T>::end()
{
	return arr + size;
}
template<class T>
Vector<T>::~Vector()
{
}


