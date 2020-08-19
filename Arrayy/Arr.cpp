#include "Arr.h"

Array::Array()
{
	arr = nullptr;
	size = 0;
	max = 0;
	min = 0;
	average = 0;
}
Array::Array(int size)
{
	this->size = size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	max = 0;
	min = 0;
	average = 0;
}
Array::Array(const Array& ent)
{
	size = ent.size;
	max = ent.max;
	min = ent.min;
	average = ent.average;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = ent.arr[i];
	}
}

void Array::Print() const
{
	cout << "Array (size=" << size << "): ";
	for (int i = 0; i < size; i++)
	{
		if (i + 1 == size)
		{
			cout << arr[i] << " ";
		}
		else
		{
			cout << arr[i] << ", ";
		}
	}
	cout << endl;
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;
	cout << "Average = " << average << endl;
}
void Array::AddNumber(int cont)
{
	int* temp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = cont;
	size = size + 1;
	delete[] arr;
	arr = temp;
}
void Array::DeleteNumber(int index)
{
	if (index > size || index < 0)
	{
		cout << "Deleting Error" << endl;
	}
	else
	{
		int* temp = new int[size - 1];
		int a = 0;
		for (int i = 0; i < size; i++)
		{
			if (i != index - 1)
			{
				temp[a] = arr[i];  a++;
			}
		}
		size = size - 1;
		delete[] arr;
		arr = temp;
	}
}
void Array::SortZrost()
{
	int temps;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temps = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temps;
			}
		}
	}
}
void Array::SortSpad()
{
	int temps;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temps = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temps;
			}
		}
	}
}
void Array::MaximumNumber()
{
	SortSpad();
	max = arr[0];
}
void Array::MaximumNumber2()
{
	max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
}
void Array::MinimumNumber()
{
	SortZrost();
	min = arr[0];
}
void Array::MinimumNumber2()
{
	min = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
}
void Array::Average()
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	this->average = sum / this->size;
}
void Array::FillRand()
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = (rand() % 100);
		}
	}
}
Array::operator long()
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int& Array::operator[](int index)
{
	if (index >= 0 && index < size)
	{
		return arr[index];
	}
}
void Array::operator()(int number)
{
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i] + number;
		}
}
Array& Array::operator=(const Array& other)
{
	this->size = other.size;
	this->max = other.max;
	this->min = other.min;
	this->average = other.average;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = other.arr[i];
	}
	return *this;
}

Array Array::operator-() const
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] * (-1);
	}
	return *this;
}

Array Array::operator++(int)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] + 1;
	}
	return 0;
}
Array Array::operator++()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] + 1;
	}
	return 0;
}
Array Array::operator--(int)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] - 1;
	}
	return 0;
}
Array Array::operator--()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] - 1;
	}
	return 0;
}
Array::~Array()
{
	delete[] arr;
}
