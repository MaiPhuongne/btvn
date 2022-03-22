#include <iostream.h>
int main()
{
	int n,s;
	cout<< " Nhap so nguyen duong n:";
	cin>>n;
	s=0;
	for ( int i=1; i<=n/2; i++){
		if (n%i==0)
		   s+=i;
    }
    if (s==n)
       cout<< " day so hoan hao"<<endl;
    else 
       cout<< " day khong hoan hao"<<endl;
	return 0;
}