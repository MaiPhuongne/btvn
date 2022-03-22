//Tinh dien tieu thu
#include<iostream>
using namespace std;
int main()
{
	int sd;
	float tiendien;
	cout<<"Nhap vao so dien da dung: (sd>0) ";
	cin>>sd;
	if (sd<=100)
		tiendien=sd*500;
	else
		tiendien=100*500 + (sd-100)*800;
	cout<<"So tien dien phai tra la: "<<tiendien<<endl;
return 0;
	}
