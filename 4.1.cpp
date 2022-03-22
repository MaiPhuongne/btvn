#include <iostream>
using namespace std;
int main()
{
	int n, i,s=0;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	i=1;
	while (i<=n)
	{
		s=s+i;
		i++;
	}
	cout<<"Tong cac so nguyen tu 1 den n la "<<s<<endl;
	return 0;
}
