#include <iostream>
using namespace std;

    void nhap(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<"a["<<i<<"]= ";
            cin>>a[i];
            cout<<endl;
        }
        }
    void xuat(int a[],int n){
        for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
        }
    void chanle(int a[],int n){
        cout<<"\nphan tu le o vi tri chan :";
        for(int i=0;i<n;i++){
        if(a[i] % 2 != 0 and i % 2 == 0){
            cout<<a[i]<<" ";
        }
        }
    }
        void lechan(int a[], int n)
{
    cout<<"\nphan tu chan o vi tri le :";
    for(int i=0; i < n; i++){
            if(a[i] % 2 == 0 and i%2 != 0)
                {
                    cout<<a[i]<<" ";
                }
        }
}
int main(){
    int a[100],n;
    cout<<"nhap so luong phan tu :";
    cin>>n;
    nhap(a,n);
    cout<<"hien thi lai mang :"<<endl;
    xuat(a,n);
    chanle(a,n);
    lechan(a,n);
    return 0;
    }
	
	
	
