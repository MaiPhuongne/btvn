#include <iostream.h>
int main()
{
	int a[10], n ;
	cout<< " nhap so phan tu n= ";
	cin>> n;
	for ( int i=0; i<n; i++)
	{
		cout<<" a[ "<<i<<" ]= ";
		cin>>a[i];
	}
	for ( int i=0; i<n; i++)
	cout<<a[i]<< " ";	
	return 0;
}