#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string hoten;
	string namsinh;
	string cccd;
	
	fstream file;
	file.open("TTCN.txt",ios::in);
	getline(file,hoten);
	getline(file,namsinh);
	getline(file,cccd);
	file.close();
	
	file.open("TTCN1.txt",ios::out);
	file<<"\nNhap ho ten: ";
	file<<hoten;
	file<<"\nNhap nam sinh: ";
	file<<namsinh;
	file<<"\nNhap cccd: ";
	file<<cccd;
	file.close();
	
	return 0;
	}
