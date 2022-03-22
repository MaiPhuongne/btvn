#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout <<"nhap 3 so nguyen a,b,c : "<< endl;
	cin >>a>>b>>c;
	if (a==0)
		if (b<c)
			cout <<"PT vo so nghiem ";
		else 
			cout <<"PT vo nghiem";
	else 
		cout <<"pt có nghiem la "<<(float)(c-b)/a<<endl;
return 0;
}
