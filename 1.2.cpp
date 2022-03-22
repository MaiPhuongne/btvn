#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int a,b,c;
	float p, S;
	cout <<"nhap 3 so nguyen a,b,c : "<< endl;
	cin >>a>>b>>c;
	p=a+b+c;
	cout <<"Chu vi cua tam giac la "<<p<<endl; 
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	cout <<"Dien tich cua tam giac la "<<S<<endl;
	if (a+b>c && a+c>b && b+c>a)
	{	cout <<"Do la tam giac "<<endl; 
		if  (a==b && b==c)
		cout <<"Do la tam giac deu"<<endl;
		else 
			if (a==b || b==c || a==c)
			cout <<"Do la tam giac can "<<endl;
			else 
				if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b+c*c == a*a))
				cout <<"Do la tam giac vuong"<<endl; 
	}
	else 
		cout  <<"Do khong la tam giac"<<endl;
	return 0;
} 
	
	
