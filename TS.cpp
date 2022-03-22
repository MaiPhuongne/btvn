#include <iostream.h>
int main()
{
	int n;
	cout<<" nhap n = ";
	cin>> n;
	float s=0;
	for ( int i=1; i<=n; i++)
	s=s+1.0/i;
	cout<<" tong s = "<<s<<endl;
	return 0;
}