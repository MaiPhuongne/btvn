#include <iostream>
using namespace std;
int main()
{
	int a,b,c,max,min, luachon;
	cout<<"Nhap vao ba so:"<<endl;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"c = "; cin>>c;
	cout<<"**************************************"<<endl;
	cout<<"* Hay nhap vao 1 cong viec:(1/2/3) *"<<endl;
	cout<<"* 1. Tinh tong a+b+c *"<<endl;
	cout<<"* 2. Tinh tich a*b*c *"<<endl;
	cout<<"* 3. Giai phuong trinh ax+b=c *"<<endl;
	cout<<"**************************************"<<endl;
	cout << "Nhap su lua chon cua ban: "<<endl;
	cin >>luachon;
	switch(luachon)
	{
		case 1:
			cout<<"a + b + c = "<<a+b+c<<endl;  break;
		case 2:
			cout<<"a * b * c = "<<a*b*c<<endl;  break;
		case 3:
			if (a==0)
				if (b==0)
					if(c==0)
						cout<<"pt vo so nghiem";
					else
						cout<<"pt vo nghiem"<<endl;
				else
					cout<<"pt vo nghiem " <<endl;
			else 
				cout<<"pt co nghiem x = "<<(c-b)/a<<endl;
				break;
	}
	return 0;
}
