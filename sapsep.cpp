#include <iostream>

using namespace std;

int main()
{
int tg;
int a[5];
    for(int i =0; i <5;i++){
		cout << "\na[" <<i<<"] = ";
		cin >> a[i];
		}
	for(int i =0; i <5;i++)
	for(int j =i+1; j <5;j++)	
		if(a[i] < a[j]){
		tg=a[i];
		a[i]=a[j];
		a[j]=tg;
		}
	for(int i =0; i <5;i++)
		cout << a[i]<< " ";
		return 0;
}
					