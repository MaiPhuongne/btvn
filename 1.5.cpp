//giai ptb2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	float d;
	cout <<"Nhap a= "; cin>>a;
	cout <<"Nhap b= "; cin>>b;
	cout <<"Nhap c= "; cin>>c;
	if (a==0)
		if(b==0)
			if(c==0)
				cout<<"Pt vo so ngiem"<<endl;
			else 
				cout<<"Pt vo nghiem"<<endl;
		else 
			cout <<"Pt co 1 nghiem x= "<<(float)-c/b<<endl;
	else //(a!=0)
	{
		d=b*b-4*a*c;
		if(d<0)
			cout<<"Pt vo nghiem"<<endl;
		else
			if(d==0)
				cout<<"pt co nghiem x= "<<-b/(2*a)<<endl;
			else 
			{
				cout<<"pt co 2 nghiem"<<endl;
				cout<<"x1= "<<(-b - sqrt(d))/(2*a)<<endl;
				cout<<"x2= "<<(-b + sqrt(d))/(2*a)<<endl;
			}
	}
	return 0;
}
