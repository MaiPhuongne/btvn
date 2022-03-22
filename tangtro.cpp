#include <iostream>
using namespace std;
int main()
{
	int a[100],n;
	int *p;
	cout<<" nhap so phan tu mang ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	p=a;
	cout<<" mang moi la ";
	for (int i=0; i<n; i++){
		cout<<*p+2<<" ";
		p++;
		}
	return 0;
}