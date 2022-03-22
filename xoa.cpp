#include <iostream>
using namespace std;
int main()
{
	int a[10], n,k ;
	cout<< " nhap so phan tu n= ";
	cin>> n;
	for ( int i=0; i<n; i++)
	{
		cout<<" a[ "<<i<<" ]= ";
		cin>>a[i];
	}
	cout<< " nhap so k  ";
	cin>>k;
	for (int i=k-1;i<=n;i++)
	{
	a[i]=a[i+1];
	}
	n--;
		cout<<"mang sau khi xoa la: "<<endl;
		for (int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
