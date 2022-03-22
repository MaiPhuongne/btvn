#include <iostream>
using namespace std;
struct Ngan
{
	char ten[50];
	int tuoi;
	char diachi[30];
}Ngan;
int main (){
	cout<<"Nhap ten cua ban :";
	cin.getline(Ngan.ten,50);
	cout<<"Nhap tuoi cua ban :";
	cin>>Ngan.tuoi;
	cin.ignore();
	cout<<"nhap dia chi :";
	cin.getline(Ngan.diachi,30);
	return 0;
	}
