#include<iostream>
#include<math.h>
using namespace std;

int main(){

int number;
float e = 0.0 , product = 1.0;
cout << " enter a number: ";	
cin >> number ;
cout <<"e= ";
	        
    for (int i = 0; i <= number ; i++){
        	
          if(i == 0)
             product = 1;	
          else 
             product = product * i;
         
        cout << "1/" << i << "! ";
        e = e + (1/product);    
        
	  if (i == number)
             break;  
	  else
	     cout << " + "; 
     }
cout << "=";
cout << float(e);
}
