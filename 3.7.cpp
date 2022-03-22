#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Cac so co 4 chu so thoa man a+b=c+d la:  "<<endl;
	for ( a=1; a<=9; a++)
		for ( b=0; b<=9; b++)
			for ( c=0; c<=9; c++)
				for ( d=0; d<=9; d++)
					if(a+b=c+d)
						cout<<a*1000+b*100+c*10+d<<"\t";
	return 0;
}
