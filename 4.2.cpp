#include <iostream>
using namespace std;
int main()
{
	char kytu;
	int dem=0, demk=0 ;
	do {
		cout<<"Nhap vao ky tu ";
		cin>>kytu;
		if (kytu != '*')	dem++;
		if (kytu == 'k')	demk++;
	} while (kytu != '*')	;
	cout<<"so ky tu da nhap :"<<dem<<endl;
	cout<<"so ky tu k la :"<<demk<<endl;
	return 0;
}
