#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"NHap n: ";
	cin>>n;
	cout<<"Cac so hoan hao trong pham vi n la: "<<endl;
	for (int i=1; i<=n; i++)
	{
		int s = 0;
		for (int j=1; j<i; j++)
		if (i%j==0)
		s+=j;
		if (s==i)
		cout<<i<<"\t";
	}
	return 0;
	
}
