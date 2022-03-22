#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Nhap a: ";	cin>>a;
	cout<<"Nhap b: ";	cin>>b;
	cout<<"Nhap c: ";	cin>>c;
	if (a+b==c && a+c==b && b+c==a)
	{
		cout<<"La 3 canh cua 1 tam giac"<<endl;
	}
	else 
	cout<<"K la 3 canh cua tam giac";
	return 0;
}
