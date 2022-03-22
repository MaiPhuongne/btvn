#include <iostream>

#include <cmath>
using namespace std;
 
int main()
{
 
    float a, b, c, delta, x1, x2;
    cout << " Nhap a, b, c = "<<endl;
	cin >> a>> b>> c;
    if(a == 0) {
        if(b == 0) {
            if (c == 0) 
                cout << "PT vo so nghiem" << endl;
            else 
                cout << "PT vo nghiem" << endl;
			}	  
    else 
    	cout << "PT co nghiem duy nhat: " << -c/b << endl;
    }
    else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        }else if ( delta == 0) 
            cout << "PT co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        else
            cout << "PT vo nghiem" << endl;
        }
    return 0;
}