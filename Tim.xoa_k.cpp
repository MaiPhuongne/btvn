#include <iostream>
using namespace std;
int main()
{
	int a[200], n,k ;
	cout<< " nhap so phan tu n= ";
	cin>> n;
	for ( int i=0; i<n; i++)
	{
		cout<<" a[ "<<i<<" ]= ";
		cin>>a[i];
	}
	cout<< " nhap so k can tim: ";
	cin>>k;
	for ( int i=0; i<n; i++)
		if ( a[i]==k)
		{
		cout<<" so k can tim a["<<i<<"]="<<a[i]<<endl;
        }
    // xoá phan tu o vi tri k
    {    
	for (int i=k-1;i<n;i++)
	{
	a[i]=a[i+1];
	}
	n--;
		cout<<"mang sau khi xoa la: "<<endl;
		for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
		}
	// xoá phan tu bang k dau tien 
	
	return 0;
}
	
