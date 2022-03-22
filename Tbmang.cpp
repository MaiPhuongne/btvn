#include <iostream>
using namespace std;
void nhap( int a[100] , int n )
{
	for(int i=0; i<n; i++){
   		cout<<"a["<<i<<"] = ";
   		cin>>a[i];
   }
   cout<<endl;
}
void tong( int a[], int &n , int d=0, int s=0 )
{
	for(int i=0; i<n; i++){
      	s= s+ a[i];
      	d++;
      }	
      cout<<(float)s/d<<endl;
}

int main()
{
   	int a[100];
   	int n ;
   	cout<<"Nhap n = ";
   	cin>>n;
   	nhap( a, n);
   	cout<<"Trung binh la :";
	tong( a, n);

   return 0;
}
