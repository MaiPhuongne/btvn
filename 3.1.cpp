#include <iostream>
using namespace std;
int main()
{
	int n,i ;
	long s=0;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	for (i=1; i<=n; i++)
	 s= s+i;
	 cout<<"Tong cua cac so nguyen tu 1 den "<<n<<" la "<<s<<endl;
return 0;
}
