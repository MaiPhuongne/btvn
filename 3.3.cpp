#include<iostream>
using namespace std;
int main()
{
	int n,i ;
	cout<<"nhap n = "; cin>>n;
	cout<<"tat ca uoc cua n la: "<<endl;
	for(i=1; i<=n; i++)
	if (n % i==0)
	cout<<i<<"\t";
	return 0;
}
