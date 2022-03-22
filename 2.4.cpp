#include<iostream>
using namespace std;
int main()
{
	int x,y;
	char toantu;
	cout << "Nhap so thu nhat: ";
	cin >> x;
	cout << "Nhap toan tu: ";
	cin >>toantu;
	cout << "Nhap so thu hai: ";
	cin >> y;
	switch (toantu)
	{
	case '+': 
		cout<<"x + y = "<<x+y<<endl; break;
	case '-': 
		cout<<"x - y = "<<x - y<<endl; break;
	case '*': 
		cout<<"x * y = "<<x * y<<endl; break;
	case '/':
		if (y == 0) 
			cout<<"kong chia duoc!"<<endl;
		else 
			cout<<"x / y = "<<(float)x/y<<endl;
			 break;
	}
return 0;
	}
