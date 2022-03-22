#include <iostream>
using namespace std;
void NhapMang(int a[], int &n)
{
    cout<<" nhap n: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<" ] = ";
        cin>>a[i];
    }
}

void HienThi(int a[], int n)
{
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int TimK(int a[], int n, int k)
{
    int kq=-1;
    for(int i=0; i<n; i++)
    if (a[i]==k)
    {
        kq=i;
        break;
    }
    return kq;
}
int main ()
{

    int a[200], n, k;
    NhapMang(a,n);
    HienThi(a,n);
  
    cout<<" nhap so can tim: "; cin>>k;
    if (TimK(a,n,k)>=0)
    cout<<"Tim thay k o vi tri "<<k<<endl;
    else
    cout<<" Khong co k trong day!"<<endl;
	return 0;
}
