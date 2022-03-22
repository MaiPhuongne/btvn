#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";	 cin>>n;
	int i=1;	//chi so hang
	while (i<=n)
	{	int j=1;	//chi so cot
		while (j<=i)
		{	cout<<j<<" ";
			j++;	
		}
		cout<<"\n";
		i++;
	}
	return 0;	
}
