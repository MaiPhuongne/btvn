#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int n, tbc=0, dem=0 ;
    cout<<"nhap so phan tu:";
    cin>>n;
    for(int i=0 ; i<n ; i++)
	{
    cout<<"a[ "<<i<<"]= ";
    cin>>a[i];
	}
    for(int i=0 ; i<n ; i++)
   	if(a[i]<0){
   		dem=dem+1;
   		tbc=tbc+1.0*a[i];
   		}
    cout<<"tbc =:"<<tbc/dem<<endl;
    cout<<"So chia het cho 5 la: ";
    	for(int i=0 ; i<n ; i++)
    	if (a[i]%5==0)
    	cout<<a[i] << " ";
    return 0;
}