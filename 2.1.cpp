#include<iostream>
using namespace std;
int main()
{
	int thang, nam;
	cout<<"nhap vao mot thang: ";
	cin>>thang;
	cout<<"nhap vao mot nam: ";
	cin>>nam;
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout<<"thang do co 31 ngay"<<endl; break;
		case 4: case 6: case 9: case 11:
			cout<<"thang do co 30 ngay"<<endl; break;
		case 2:
			if (nam%4==0 && nam %100!=0 || nam%400==0)
				cout<<"thang do co 28 ngay"<<endl;
			else 
				cout<<"thang do co 29 ngay"<<endl;
			break;
			
	}
	return 0;
}
