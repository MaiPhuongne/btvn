#include <iostream>
using namespace std;
void menu()
{
	int n, tg, a[100];
	cout<<"Nhap so phan tu mang : ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<"\na[ "<<i<<" ]= ";
		cin>>a[i];
	}
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for (int i=0; i<n; i++)
	{
	if ( a[i]<0 ) {
		cout<<"a[ "<<i<<" ]="; 
		cin>>a[i];}
	}
	cout<<"cac phan tu nho hon 0 la: "<<endl;
	
}
