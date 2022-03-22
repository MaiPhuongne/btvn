#include<iostream>
using namespace std;
int main()
{
	char kytu;
	cout <<"Nhap vao mot ky tu: ";
	cin>>kytu;
	switch (kytu)
	{
	case 'a':
	case 'A':
		cout<<"Xin chao"<<endl; 
		break;
	case 'b':
	case 'B':
		cout <<"Hoan nghenh"<<endl; 
		break;
	default:
		cout<<"Xin loi";
		break;
		}
	return 0;
	}
