#include <iostream>
using namespace std;
int main()
{
	int a, b, tonga=0, tongb=0;
	int i=1, j=1;
	cout<<"Nhap so nguyen duong a: ";	cin>>a;
	cout<<"Nhap so nguyen duong b: ";	cin>>b;
	do
	{
		if (a%i==0 )
		{
		tonga= tonga+i;
		}
		if (b%i==0)
		{
		tongb= tongb+i;
		}
		i++;
	
	} while ( i<b );
	if ( tonga==b && tongb==a)
	cout<<"Hai so "<<a<<" , "<<b<<" la ban be "<<endl;
	else
	cout<<"Hai so "<<a<<" , "<<b<<" ko la ban be "<<endl;
	return 0;
}
