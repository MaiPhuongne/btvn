#include<iostream>
using namespace std;
int main()
{
	int luachon;
	cout<<"1.Dap an A"<<endl;
	cout<<"2.Dap an B"<<endl;
	cout<<"3.Dap an C"<<endl;
	cout<<"4.Dap an C"<<endl;
	cout<<"nhap lua chon cua ban: "<<endl;
	cin>>luachon;
	switch (luachon)
	{
	case 1: cout<<"Ban da chon d/a A"<<endl; break;
	case 2: cout<<"Ban da chon d/a B"<<endl; break;
	case 3: cout<<"Ban da chon d/a C"<<endl; break;
	case 4: cout<<"Ban da chon d/a D"<<endl; break;
	default : cout<<"Ban da k chon lua chon nao"<<endl; break;
	}
return 0;
}
