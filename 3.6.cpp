#include <iostream>
using namespace std;
int main()
{
	int n;
	float s;
	cout<<"Nhap n ";
	cin>>n;
	for (int i=1; i<=n; i++)
		s=s+(float)1/i;
	cout<<"tong la "<<s<<endl;
	return 0;
	}
