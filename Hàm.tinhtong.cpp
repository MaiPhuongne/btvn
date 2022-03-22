#include <iostream>

using namespace std;

void Nhap_day_so (int a[] , int n) {
    for (int i=0 ; i < n ; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    cout << endl;
}

void Hien_thi_day_so (int a[] , int n) {
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] <<" ";
    }
    cout << endl;
}

void Tong_day_so (int a[] , int n) {
    int tong = 0;
    for (int i = 0 ; i < n ; i++) {
        tong += a[i];
    }
    cout << "Tong day so la : " << tong << endl;
}

void Max_day_so (int a[] , int n) {
    int max = a[0];
    for (int i = 0 ; i < n ; i++) {
        if (a[i] > max ) {
            max = a[i];
        }
    }
    cout << "Gia tri max cua day so la : " << max <<endl;
}

void Min_day_so (int a[] , int n) {
    int min = a[0];
    for (int i = 0 ; i < n ; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << "Gia tri min cua day so la : " << min << endl;
}

int main(int argc, char const *argv[])
{
    int a[1000];
    int n;
    int tong = 0;
    int max = 0;
    int min = 0;
    cout << " Nhap so phan tu n : ";
    cin >> n;
    Nhap_day_so(a,n);
    Hien_thi_day_so(a,n);
    Tong_day_so(a,n);
    Max_day_so (a,n);
    Min_day_so (a,n);
    return 0;
}
