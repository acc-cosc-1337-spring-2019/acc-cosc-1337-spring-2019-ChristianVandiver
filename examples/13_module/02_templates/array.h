//
#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>

using std::cout;

template <typename T>
class Array
{
public:
	Array(int size);
	//copy constructor
	Array(const Array<T>& aray);
	//copy assignment
	Array<T> operator=(const Array& right);
	Array(Array&& aray);
	//move assignment
	Array<T> operator=(Array&& right);
	~Array();
	void process();

private:
	int size;
	T* numbers;
};

#endif //ARRAY_H

