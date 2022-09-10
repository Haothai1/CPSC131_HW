#include "prototype.hpp"
#include <string>

template<typename T>
vector131<T>::vector131(int size)
{
	this->cap = size;
	this->nrOfEl = 0;
	this->arr = new T*[this->cap];

	initialize(this->nrOfEl);
}

template<typename T>
vector131<T>::~vector131()
{
	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		delete this->arr[i];
	}
	delete[]this->arr;
}

template<typename T>
T& vector131<T>::operator[](const int index)
{
	if (index < 0 || index >= this->nrOfEl)
		throw("OUT OF BOUDNS!");

	return *this->arr[index];
}

template<typename T>
void vector131<T>::initialize(int from)
{
	for (size_t i = from; i < cap; i++)
	{
		this->arr[i] = nullptr;
	}
}

template<typename T>
void vector131<T>::expand()
{
	this->cap *= 2;

	T **tempArr = new T*[this->cap];

	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		tempArr[i] = this->arr[i];
	}

	delete[]this->arr;

	this->arr = tempArr;

	initialize(this->nrOfEl);

}

template<typename T>
void vector131<T>::push(const T& element)
{
	if (this->nrOfEl >= this->cap)
	{
		this->expand();
	}

	this->arr[this->nrOfEl++] = new T(element);
}

