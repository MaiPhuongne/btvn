#include <iostream.h>
#include <cmath>
int main()
{
	int a,b,x,y;
	cout<< " nhap a: "; cin>>a;
	cout<< " nhap b: "; cin>>b;
	a=abs(a); b=abs(b); x=a, y=b;
	//tìm uoc so chung lon nhat
	while ( a!=b)
	     if (a>b)
	     a=a-b;
	     else
	     b=b-a;
	cout<< " uoc so chung lon nhat= "<<a<<endl;
	// tim boi chung nho nhat
	cout<< " boi so chung nho nhat= "<<x*y/a<<endl;
	return 0;
}