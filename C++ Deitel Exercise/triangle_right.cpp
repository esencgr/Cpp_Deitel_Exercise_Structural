#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
double x,y,z;
cout<< "enter the side of triangle "<<endl;
cin >> x >> y >> z;

    if (z*z == x*x + y*y)
        cout << "The three numbers could be sides of a right triangle" << endl;
    else
        cout << "The three numbers probably are not the sides of a right triangle" << endl;
return 0;
}
