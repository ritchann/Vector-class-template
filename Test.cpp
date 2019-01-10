#include <iostream>
#include "Vector.h"
#include <vector>
using namespace std;
int main()
{
	Vector<int> v;
	v.Add(5);
	v.Add(10);
	v.Add(26);
	v.Add(100);
	v.Delete(10);
	iteratorVector<int> it(v.begin());
	for (it = v.begin(); it != v.end(); it++)
		cout << it.GetElem() << " ";
	system("pause");
}