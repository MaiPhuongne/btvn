#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int n, s;
	cout<<" nhap so phan tu n= ";
	cin>>n;
	for ( int i=0; i<n ; i++)
	{ 
		cout<< "a[" << i << "]=";
		cin>> a[i];
	}
	s=0;
	for(int i=0 ; i<n ; i++){
		if ( a[i]%3==0 )
		s=s+a[i];
	}
	cout<<" tong cac so chia het cho 3= "<<s<<endl;
	return 0;
}