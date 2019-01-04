#include<iostream>
#include<math.h>
using namespace std;
int main(){

long int hipo,first,second,sides,hipo2;
int count=0;

   for(first=1;   first<=500;  first++){
	for(second=1;   second<=500;   second++){

	    for(hipo=1;  hipo<=500;   hipo++){

		hipo2 = pow(hipo,2);
		sides = pow(first,2) + pow(second,2);

		   if(hipo2 == sides){
		      cout << first << "-" << second << "-" << hipo <<endl;
		      count++;
		   }
	    }
	}
    }
cout<< "total "<< count << " triangle find...";
}
