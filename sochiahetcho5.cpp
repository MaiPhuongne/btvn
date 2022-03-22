#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int n;
	cout<<" nhap so phan tu n= ";
	cin>>n;
	for ( int i=0; i<n ; i++)
	{ 
		cout<< "a[" << i << "]=";
		cin>> a[i];
	}
	for(int i=1 ; i<n ; i++)
	if ( a[i]%5==0 )
	cout<<" So chia het cho 5 "<< a[i]<< endl;
	return 0;
}