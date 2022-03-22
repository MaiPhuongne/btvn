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
	file<<"Hien thi 3 so nguyen duong : "<<" "<< a << " "<< b <<" "<< c<<endl;
	
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	file << "Day la tam giac";
	else 
	file << "Day ko la tam giac";
	return 0;
	}
