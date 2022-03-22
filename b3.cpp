#include <iostream.h>
int main()
{
	int n, dem;
	dem=0;
	do{
		cout<<" nhap n:"; cin>>n;
		dem=dem+1;
	}while (n!=0);
	cout<<" so phan tu"<<dem<<endl;
	return 0;
}