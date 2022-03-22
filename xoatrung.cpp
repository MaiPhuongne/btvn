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
void xuat (int a[100], int n)
{
	for (int i=0; i<n; i++){
	cout<<a[i]<<" ";
	}
	cout<<endl;
}
void min_day (int a[100], int n)
{
	int min = a[0];
	for (int i=0; i<n; i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"Min= "<<min<<endl;
}
void xoaSoGiongNhau(int a[], int &n) {
    for(int i  = 0 ; i < n ; i++) {
        int dem = 0;
        for(int j  = 0 ; j < n ; j++) {
            if(a[i] == a[j]) {
                dem++;
            }
        }
        if(dem == 1) {
            cout << a[i] << " ";
        }
    }
}
int main()
{
	int a[100];
	int n;
	cout<<"Nhap n= ";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	min_day(a,n);
	cout<<"mang sau ki xoa: ";
	xoaSoGiongNhau(a,n);
 	return 0;
}
