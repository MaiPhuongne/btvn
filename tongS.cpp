#include <iostream.h>
int main()
{
	int n,i;
	float s;
	cout<< " nhap n=";
	cin>>n;
	s=0;
	i=1;
	do{
		s=s+1.0/i;
		i++;
	}while (i<=n);
	cout<<"s="<<s<<endl;
	return 0;
}