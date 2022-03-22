#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0 ; i<n ; i++){
	cout<<"a["<<i<<"]= ";
	cin>>a[i];
	cout<<endl;
	}
	}
void xuat(int a[],int n){
	for(int i=0 ; i<n ; i++){
		cout<<a[i]<<" ";
		cout<<endl;
		}
		}
int UCLN(int x, int y){
	while (x!=y)
	{
	if(x<y)
	{
		y=y-x;
		}
		else if(x>y)
		{
			x=x-y;
			}
		}
		return y;
		}	
int	UCLN_Mang(int a[100], int n){
	int x=a[0];
	for(int i=1;i<n;i++)
	{
		x=UCLN(x,a[i]);
		}
		return x;
		}
//dk bcnn
int BCNN(int x,int y){
	return (x*y)/UCLN(x,y);
}
	
int BCNN_Mang(int a[100],int n){
	int x=a[0];
	for(int i=1;i<n;i++)
	{
		x=BCNN(x,a[i]);
	}
	return x;
}
		
int main()
{
	int a[100],n,x,y;
	cout<<"\nNhap so luong phan tu :";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	cout<<"\nUoc chung lon nhat cua mang:"<<UCLN_Mang(a,n)<<endl;
	cout<<"\nBoi chung nho nhat cua mang :"<<BCNN_Mang(a,n)<<endl;
	return 0;
	}
