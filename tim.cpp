#include <iostream.h>
int main()
{
	int a[10], n,x ;
	cout<< " nhap so phan tu n= ";
	cin>> n;
	for ( int i=0; i<n; i++)
	{
		cout<<" a[ "<<i<<" ]= ";
		cin>>a[i];
	}
	cout<< " nhap so x can tim: ";
	cin>>x;
	for ( int i=0; i<n; i++)
		if ( a[i]==x)
		{
		cout<<" so x can tim a["<<i<<"]="<<a[i];
  		break;
        }
    return 0;
}
	