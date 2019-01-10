#pragma once
#include "Iterator.h"
template<class T>class iteratorVector :public Iterator<T>
{
	T* cur;
public:
	iteratorVector(T* first) :cur(first)
	{}
	T& operator++(T) override;
	bool operator !=(const iteratorVector& it);
	T& operator *();
	T GetElem() override;
	bool IsNext() override;
	~iteratorVector();
};
template<class T>
T& iteratorVector<T>::operator++(T)
{
	return *cur++;
}
template<class T>
bool iteratorVector<T>::operator !=(const iteratorVector& it)
{
	return cur != it.cur;
}
template<class T>
T& iteratorVector<T>::operator *()
{
	return *cur;
}
template<class T>
T iteratorVector<T>::GetElem()
{
	return *cur;
}
template<class T>
bool iteratorVector<T>::IsNext()
{
	cur++;
	if (cur != nullptr)
		return true;
	else
		return false;
}
template<class T>
iteratorVector<T>::~iteratorVector()
{
}

