#include <iostream.h>
int main()
{
	long i,n,p;
	cout<< " nhap so n: ";
	cin>> n;
	p=1;
	i=1;
	do {
		p=p*i;
		i=i+2;
	} while (i<=2*n-1);
	cout<<" p= "<<p<<endl;
	return 0;
}