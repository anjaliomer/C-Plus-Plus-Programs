#pragma once

const int size = 3;

template <class T>
class vector
{
	T* v;

public:
	vector();
	vector(T* a);
	T operator*(vector<T> &y);
};

template<class T>
vector<T>::vector()
{
	v = new T[::size];
	for (int i = 0; i < ::size; i++)
		v[i] = 0;
}

template<class T>
vector<T>::vector(T *a)
{
	v = new T[::size];
	for (int i = 0; i < ::size; i++)
		v[i] = a[i];
}

template<class T>
T vector<T>::operator*(vector<T>& y)
{
	T sum = 0;
	for (int i = 0; i < ::size;i++)
		sum += this->v[i] * y.v[i];
	return T(sum);
}
