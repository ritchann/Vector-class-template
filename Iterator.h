#pragma once
template<class T>
class Iterator
{
public:
	Iterator();
	virtual ~Iterator();
	virtual T GetElem() = 0;
	virtual bool IsNext() = 0;
	virtual T& operator++(T)=0;
	T* current_pointer;
};

template<class T>
Iterator<T>::Iterator()
{
}


template<class T>
Iterator<T>::~Iterator()
{
}

