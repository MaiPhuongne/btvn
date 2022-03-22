#include<iostream>
#include<fstream>
using namespace std;
const int SIZE = 10;
int main(){
	fstream file;
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10};
	int b[SIZE];
	file.open("a.s",ios::out|ios::binary);
		if(!file){
		cout<<"Khong the tao duoc tep tin "<<file<<endl;	
		exit(1);
		}
		file.write((char*)(a),sizeof(a));
	file.close();
	
	//
	file.open("a.a",ios::in|ios::binary);
		if(!file){
		cout<<"Khong the tao duoc tep tin "<<file<<endl;
		exit(1);
		}
	file.read((char*)(b),sizeof(b));
		for(int i = 0;i < SIZE;i++)
		cout<<b[i]<<" ";
		cout<<endl;
	file.close();
		return 0;
		}
