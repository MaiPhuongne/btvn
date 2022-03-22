#include <iostream>
using namespace std;
void nhap( int a[100], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"\na[ "<<i<<" ]= ";
		cin>>a[i];
	}
}

void xuat( int a[100], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
}

void am (int a[100], int n )
{
	for (int i=0; i<n; i++)
	{
	if ( a[i]<0 ) 
		{
		cout<<a[i]<<"\t";
		}
	}
}

void sapxep (int a[100], int n, int tg)
{
	for (int i=0; i<n-1 ; i++)
	for (int j=i+1; j<n; j++)
		if (a[i] > a[j]){
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
	for(int i =0; i <n;i++)
		cout << a[i]<< " ";
}
int main()
{
	int a[100], n, tg;
	cout<<"Nhap n: ";	cin>>n;
	nhap(a,n);
	xuat(a,n);
	cout<<"\nCac phan tu am trong mang: "<<endl;
	am(a,n);
	cout<<"\nMang da sap xep tang dan: ";
	sapxep(a,n,tg);
	return 0;
}
