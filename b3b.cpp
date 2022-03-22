#include <iostream.h>
int main()
{
    float n, s,dem;
	s=0;
	dem=0;
	do{
		cout<<" nhap so n:"; cin>>n;
		dem=dem+1;
		s=s+n;
		
	}while (n!=0);
	dem=dem-1;
	cout<<" trung binh cong "<<s/dem<<endl;
	return 0;
}