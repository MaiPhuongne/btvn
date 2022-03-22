#include <iostream>

using namespace std;

int main()
{
    char n;
    int k, dem;
    dem =0; 
    k=0;
    do{
        cout<<" Nhap ky tu n: ";
        cin>>n;
        if(n == 'k')k=k+1;
        dem=dem+1;
    } while (n != '*');
    dem=dem-1;
    cout<<" So ky tu: "<<dem<<endl;
    cout<<" So ky tu k: "<<k<<endl;
    return 0;
}
