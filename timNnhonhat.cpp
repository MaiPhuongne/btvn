#include <iostream>

using namespace std;

int main()
{
    float a, s; int n;
    a=1;
    do{
        if (a==1)
        cout<< " Nhap a: "; 
        else
        cout<<" Nhap lai a: ";  
        
        cin>>a;
        
    } while ((a>=2) || (a<=0));
    
    s=0; n=0;
    while (s<=a)
    {
        n=n+1;
        s=s+1.0/n;
    }
    cout<<" so n can tim la: "<<n<<endl;
    return 0;
}