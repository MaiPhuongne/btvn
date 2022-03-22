#include <iostream>
using namespace std;
int main()
{
	int n;
	while (n<=0 || n>=50)
	{
		cout<<"Nhap so nguyen n: ";
		cin>>n;
		if (n<=0 || n>=50)
		cout<<"Nhap lai so n"<<endl; 
	}
}
