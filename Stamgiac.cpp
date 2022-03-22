#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int a,b,c;
	float p, S;
	
	p=(a+b+c)/2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	cout <<"Dien tich cua tam giac la "<<S<<endl;
	
	return 0;
} 
	 
