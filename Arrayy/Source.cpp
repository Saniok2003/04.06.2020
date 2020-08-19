#include "Arr.h"
using namespace std;

int main()
{
	Array Arr1(5);
	Array Arr2(5);
	Arr1.FillRand();
	Arr1.Print();
	++Arr1;
	Arr1.Print();
	--Arr1;
	Arr1.Print();
	Array arr2 = Arr1;
	cout << long(Arr1) << endl;
	arr2 = -Arr1;
	arr2.Print();
	Arr1.operator-();
	Arr1.MaximumNumber();	Arr1.MinimumNumber();	Arr1.Average();
	Arr1.Print();
	cout << Arr1.operator[](1) << endl;
	Arr1.operator()(10);
	Arr1.MaximumNumber();	Arr1.MinimumNumber();	Arr1.Average();
	Arr1.Print();

	return 0;
}