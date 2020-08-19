#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Array
{
	int* arr;
	int size;
	int max;
	int min;
	float average;

public:
	Array();
	Array(int size);
	Array(const Array& ent);

	void Print() const;
	void AddNumber(int cont);
	void DeleteNumber(int index);
	void SortZrost();
	void SortSpad();
	void MaximumNumber();
	void MaximumNumber2();
	void MinimumNumber();
	void MinimumNumber2();
	void Average();
	void FillRand();
	operator long();
	int& operator[](int index);
	void operator()(int number);
	Array& operator=(const Array& other);
	Array operator-() const;
	Array operator++(int);
	Array operator++();
	Array operator--(int);
	Array operator--();

	~Array();
};