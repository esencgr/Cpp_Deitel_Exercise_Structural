#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
long double pi = 0 , num=4.0 , denom=1.0;
long double accuracy = 10000;
cout<< "set accuracy:" << accuracy << endl;
cout<< "term\t\t  pi" << endl ;
    
	for (long loop=1;  loop<=accuracy;  loop++){
		
	     if (loop % 2 != 0)
	        pi += num/denom;
	     else 
	        pi -= num/denom;
        
	cout << loop << "\t"<< pi << endl;
	denom += 2.0;
		
	}
}
