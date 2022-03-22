#include <iostream>
using namespace std;
// tinh n! bang pp lap, de quy
// n!=1 neu n=0 va n!=n*(n-1)
long Giaithua (int n)
{
	long gt = 1;
	for (int i = 1; i <= n; i++)
		gt = gt*i;
	return gt;
}

long GiaiThua_DeQuy(int n)
{
	if (n == 0)
		return 1;
	else
		return n* GiaiThua_DeQuy(n - 1);
}
 
int main()
{
	int n = 5;
	cout << n << "!" << " = " << Giaithua (n) << endl;
	cout << n << "!" << " = " << GiaiThua_DeQuy(n) << endl;
	system("PAUSE");
    return 0;
}
