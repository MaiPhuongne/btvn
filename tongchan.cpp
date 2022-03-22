#include <iostream.h>
int main()
{
	int n, i;
	long s;
	cout << "n=";
	cin >> n;
	s = 0;
	i = 2;
	do {
		s = s + i;
		i = i + 2;
	} while (i <= n);
		cout << "s=" << s << endl;
		return 0;

}