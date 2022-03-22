#include <iostream>
using namespace std;
int main()
{
	int a[100], n;
	int *p;
	cout<<" nhap so phan tu mang ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for (int i=0; i<n; i++)
	cout<<a[i]<< " ";
	cout<<endl;
	
	p=a;
	cout<<*p<<endl;
	cout<<*(p+1)<<endl;
	cout<<*(p+2)<<endl;
	cout<<*(p+3)<<endl;
	cout<<*(p+4)<<endl;
	cout<<endl;
	
	p=a;
	for ( int i=0; i<n; i++)
	cout<<*(p+i)<<" ";
	return 0;
}