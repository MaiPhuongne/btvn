#include <iostream>
using namespace std;
int main()
{
	int a, b, c, max, min;
	cout <<"Nhap vao 3 so nguyen :"<<endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	min = a;
	if (min>b)
		min = b;
	if (min>c)
		min = c;
	cout << "Min ="<<min<<endl;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout<<"Max ="<<max<<endl;
	return 0;
}
