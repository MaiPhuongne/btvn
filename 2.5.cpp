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
	cout<<"* Hay nhap vao 1 cong viec:(1/2/3/4) *"<<endl;
	cout<<"* 1. Tinh tong a+b+c *"<<endl;
	cout<<"* 2. Tinh tich a*b*c *"<<endl;
	cout<<"* 3. Tim max *"<<endl;
	cout<<"* 4. Tim min *"<<endl;
	cout<<"**************************************"<<endl;
	cout << "Nhap su lua chon cua ban: "<<endl;
	cin >>luachon;
	switch (luachon)
	{
		case 1: 
			cout<<"a + b + c = "<<a+b+c<<endl;  break;
		case 2:
			cout<<"a * b * c = "<<a*b*c<<endl;  break;
		case 3:
			min = a;
			if (min>b)
				min = b;
			if (min>c)
				min = c;
			cout << "Min ="<<min<<endl; break;
		case 4:
			max = a;
			if (max < b) max = b;
			if (max < c) max = c;
			cout<<"Max ="<<max<<endl; break;
	}
	return 0;
}
