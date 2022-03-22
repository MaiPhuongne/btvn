#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Nhap n = "; cin>>n;
	cout<<"Bang cuu chuong cua "<<n<<":"<<endl;
	for(i=1; i<=10; i++)
		cout<<"\t"<<n<<" x "<<i<<" = "<<n*i<<endl;
	return 0;
	
}
