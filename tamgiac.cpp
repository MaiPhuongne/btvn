#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"nhap 3 so nguyen a,b,c : "<< endl;
	cin >>a>>b>>c;
	if (a+b>c && a+c>b && b+c>a)
	{	cout <<"Do la 1 tam giac"<<endl;
		if (a==b || a==c || b==c)
		cout << " Do la tam giac can"<<endl;
		else 
			if (a==b && b==c)
			cout <<"Do la tam giac deu"<<endl;
			else
				if ((a*a + b*b == c*c) || (b*b+c*c==a*a) || (a*a + c*c == b*b))
			  		cout<<"Do la tam giac vuong"<<endl;
				else
			  		cout<<"Do la tam giac thuong"<<endl;
	}
	else
		cout<<"Khong thoa man la 3 canh tam giac"<<endl;
return 0;	
}	


