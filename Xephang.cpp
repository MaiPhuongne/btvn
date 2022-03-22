#include <iostream.h>
using namespace std;

int main()
{
	float a,b,c,tb;
	cout<< " Nhap diem kiem tra:";
	cin>> a;
	cout<< " Nhap diem giua ki:";
	cin>> b;
	cout<< " Nhap diem hoc ki:";
	cin>> c;
	tb=(a+b+c)/3;
	cout<< " Diem trung binh la:"<<tb<<endl;
	if (tb>=9)
	    cout<< " Diem hang A"<<endl;
    if (tb>=7 && tb<9)
        cout<< " Diem hang B"<<endl;
    if ( tb>=5 && tb<7)
        cout<< " Diem hang C"<<endl;
    if (tb<5)
         cout<< " Diem hang D"<<endl;
    return 0;
}
	