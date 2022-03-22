#include <iostream.h>
int main()
{
	int n, s,i;
	cout<< " nhap n = "; cin>>n;
	s=0;
	i=1;
	do {
		s=s+i;
		i=i+1;
	} while (i<=n);
	cout<< " tong = "<<s<<endl;
	return 0;
}