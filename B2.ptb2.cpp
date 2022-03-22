#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,delta, x1, x2;
	fstream file;
	
	file.open("in1.txt",ios::in);
	file>>a>>b>>c;
	file.close();
	
	file.open("out1.txt",ios::out);
	file<<"Hien thi 3 so nguyen duong : "<<" "<< a << " "<< b <<" "<< c<<endl;
	if(a == 0) {
        if(b == 0) {
            if (c == 0) 
                cout << "PT vo so nghiem" << endl;
            else 
                cout << "PT vo nghiem" << endl;
			}	  
    	else 
    	file<< "PT co nghiem duy nhat: " << -c/b << endl;
   	 }
    	else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            file<< "Nghiem thu nhat x1 = " << x1 << endl;
            file<< "Nghiem thu hai x2 = " << x2 << endl;
        }else if ( delta == 0) 
            file<< "PT co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        else
            file<< "PT vo nghiem" << endl;
            }
            return 0;
}
