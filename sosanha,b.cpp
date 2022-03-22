#include <iostream>
#include "cmath"
using namespace std;
int main()
{
	int a, b, max;
	cout << "nhap so a: ";
	cin >> a;
	cout << "nhap so b: ";
	cin >> b;
	max = (a>b) ? a : b;
	cout<< "max la: " <<max<< endl;
	return 0;
}	