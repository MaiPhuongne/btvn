#include <iostream>

using namespace std;

int main()
{
	int tg, n;
	int a[10];
	cout<<" nhap so phan tu n= ";
	cin>>n;
    for(int i =0; i <n;i++){
		cout << "\na[" <<i<<"] = ";
		cin >> a[i];
		}
	for(int i =0; i <n;i++)
	for(int j =i+1; j <n;j++)	
		if(a[i] > a[j]){
		tg=a[i];
		a[i]=a[j];
		a[j]=tg;
		}
	for(int i =0; i <n;i++)
		cout << a[i]<< " ";
		return 0;
}