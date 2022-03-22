#include <iostream>

using namespace std;
//liet kê cac so nguyen duong den n
int main()
{
    int n;
    cout<< " Nhap so nguyen duong n:";
    cin>> n;
    for ( int i=2; i<=n ; i++)
        if ( n%i==0)
    cout<< i << " ";
return 0;
}