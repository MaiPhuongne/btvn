//s=2+4+6+....+2n
#include<iostream>
using namespace std;
int main()
{
	int n;
	long s=0;
	cout<<"Nhap n "; cin>>n;
	for (int i=2; i<=2*n; i+=2)
		s=s+i;
	cout<<"tong la "<<s<<endl;
return 0;	
}
