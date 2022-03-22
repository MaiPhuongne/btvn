#include <iostream>
using namespace std;
struct Phanso
{
	int tuso;
	int mauso;	
};
	void Nhap(Phanso ps[]){
		for(int i=0; i<2; i++){
			cout<<"\nNhap phan so thu "<<i+1;
			cout<<"\nNhap tu so :";
			cin>>ps[i].tuso;
			cout<<"Nhap mau so :";
			cin>>ps[i].mauso;
		}
	}
	void xuat(Phanso ps[]){
		for (int i=0; i<2; i++){
			cout<<"\nPhan so thu "<<i+1<<":"<<ps[i].tuso<<"/"<<ps[i].mauso;
		}
	}
	void tong(Phanso ps[]){
		int tu, mau;
		tu = ps[0].tuso * ps[1].mauso + ps[1].tuso * ps[0].mauso;
		mau = ps[0].mauso * ps[1].mauso;
		float tong;
		tong = (float) tu/mau;
		cout <<" \n tong = "<<tong;
	}
	void hieu(Phanso ps[]){
		int tu, mau;
		tu = ps[0].tuso * ps[1].mauso + ps[1].tuso * ps[0].mauso;
		mau = ps[0].mauso * ps[1].mauso;
		float hieu;
		hieu = (float) tu/mau;
		cout <<" \n hieu = "<<hieu;
	}
	void tich(Phanso ps[]){
		int tu,mau;
		tu = ps[0].tuso * ps[1].tuso;
		mau = ps[0].mauso * ps[1].mauso;
		float tich;
		tich = (float) tu/mau;
		cout<< " \ntich= "<<tich;
	}
	void thuong(Phanso ps[]){
		int tu,mau;
		tu= ps[0].tuso * ps[1].mauso;
		mau= ps[0].mauso * ps[1].tuso;
		float thuong;
		thuong= (float) tu/mau;
		cout<<"\nthuong= "<<thuong<<endl;
	}
	int main(){
		Phanso ps[2];
		Nhap(ps);
		xuat(ps);
		tong(ps);
		hieu(ps);
		tich(ps);
		thuong(ps);
		return 0;
	}

