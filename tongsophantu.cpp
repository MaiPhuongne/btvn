#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int n,s;
    cout<<"nhap so phan tu:";
    cin>>n;
    for(int i=0 ; i<n ; i++)
{
    cout<<"a[ "<<i<<"]= ";
    cin>>a[i];
}
    s=0;
    for(int i=0 ; i<n ; i++)
    if(a[i]<0)
	    	s=s+a[i];
    cout<<"tong am s:"<<s<<endl;

    return 0;
}