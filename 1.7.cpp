//Tinh diem tb va xep loai
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, tb;
	cout<<"Nhap diem toan: ";
	cin>>a;
	cout<<"Nhap diem Ly: ";
	cin>>b;
	cout<<"Nhap dien Hoa: ";
	cin>>c;
	tb=(a*4 + b*3 + c*2)/9;
	if(tb>=9.0)
		cout<<"Xep loai xuat xac"<<endl;
	else
		if (tb>=8.0)
				cout <<"Xep loai gioi"<<endl;
		else 
			if(tb>=6.5)
					cout<<"Xep loai kha"<<endl;
			else
				if(tb>=5.0)
						cout<<"Xep loai trung binh";
				else
						cout<<"Xep loai yeu";	
	
	return 0;
	}
