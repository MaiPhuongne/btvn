#include <iostream>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"Nhap so phan tu mang n = ";
	cin>> n;
	for ( int i=0; i<n; i++){
		cout<<" a["<<i<<"]=";
		cin>>a[i];}
	
	for ( int i=0; i<n; i++)
		if ( a[i]%2==0 )
	cout<< "cac phan tu chan "<<a[i]<<endl;	
	return 0;
}