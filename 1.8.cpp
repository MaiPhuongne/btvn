//Tinh hoa hong duoc huong cua cua hang A
#include<iostream>
using namespace std;
int main()
{
	float hh, ds;
	cout <<"nhap vao doanh so : ";
	cin>>ds;
	if(ds<=100)
		hh=ds*5/100;
	else
		if(ds<=300)
			hh=ds*10/100;
		else 
		hh=ds*20/100;
	cout<<"Hoa hong cua cty A : "<<hh<<endl;
return 0;
	}
