#include <iostream>
using namespace std;
int main()
{
	int a[10], n, max , min, vitri;
	cout<< " nhap so phan tu n= ";
	cin>> n;
		for ( int i=0; i<n; i++)
		{
		cout<<" a[ "<<i<<" ]= ";
		cin>>a[i];
		}
	max=a[0];
	vitri=0;
	for ( int i=1; i<n; i++){
		if (a[i]>max){
		max = a[i];
		vitri=i;
		}
	}
		cout<< " gia tri lon nhat la "<<max<<endl;
		cout<<" vi tri "<< vitri <<endl;
	min=a[0];
	vitri=0;
	for ( int i=1; i<n; i++){
		if (a[i]<min){
		min=a[i];
		vitri=i;
		}
	}
		cout<<" gia tri nho nhat la "<<min<<endl;
		cout<<" vi tri "<< vitri<<endl;
	return 0;
}