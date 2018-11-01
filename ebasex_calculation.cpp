#include<iostream>
#include<math.h>
using namespace std;

int main(){

int number,x;
float e=0.0 , product=1.0;
	
cout << " enter a number: ";
cin >> number ;
cout << "x:";
cin >> x;
cout << "e^x= ";
	        
    for (int i = 0; i <= number ; i++){
        	
           if ( i == 0)
              product = 1;
        	
           else 
              product = product * i;
            
            
        cout << "x^" << i << "/" << i << "!";
        e = e + (pow (x,i) / product);
        
	    if (i == number)
               break;
            
            else
	       cout << " + "; 
			
    }

cout << "=";
cout << float(e);

}
