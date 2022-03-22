#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap 2 so nguyen a, b :"<<endl;
	cout <<"a = "; cin>>a;
	cout <<"b = "; cin>>b;
	if (a==0)
		if (b==0)
			cout <<"PT vo so nghiem"<<endl;
		else 
			cout <<"PT vo nghiem"<<endl;
	else 
		cout <<"PT có nghiem x= "<< (float) -b/a <<endl;
return 0;
}
