#include <iostream.h>
int main()
{
	int n, a[100];
	long s=0;
	cout<<" nhap so phan tu mang = ";
	cin>>n;
		for(int i=0; i<n; i++){
		cout << "\na[" <<i<<"] = ";
		cin >> a[i];
		}
		for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
	for (int i=0; i<n; i++){
		if (a[i]%2==1)
		s=s+a[i];
	}
	cout<<"tong cac phan tu le = "<<s<<endl;
	
	return 0;
}