#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
	int a,b;
	fstream file;
	file.open("in1.txt",ios::in);
	file>>a>>b;
	file.close();
	
	file.open("out1.txt",ios::out);
	file<<"Hien thi 3 so nguyen duong : "<<" "<< a << " "<< b <<endl;
	if(a > 0 && b > 0){
	while (a != b){
	if( a > b){
        a=a-b;
        }
          else {
              b=b-a;
                  }
          }
          file << "UCLN ="<< a << endl;
    	}      
     	else {
     	 file << " vui long nhap lai so duong :";
      	}
	return 0;
}
