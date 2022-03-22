#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int a,b,c;
	int max = 0, min=0;
	fstream file;
	file.open("in1.txt",ios::in);
	file>>a>>b>>c;
	file.close();
	
	file.open("out1.txt",ios::out);
	file<<"Hien thi 3 so nguyen duong : "<<" "<< a << " "<< b <<" "<< c;
	max = ( a > b)?a:b;
	max = ( max > c)?max:c;
	if(a==b&&b==c)
	file<<" \nBa so bang nhau ! ";
	else
	file<< "\nGia tri lon nhat la : " <<max;
	
	min = ( a < b)?a:b;
	min = (min<c)?min:c;
	if(a==b&&b==c)
	file<<" \nBa so bang nhau ! ";
	else
	file<< "\nGia tri nho nhat la : " <<min;
	file.close();
	return 0;
	}
