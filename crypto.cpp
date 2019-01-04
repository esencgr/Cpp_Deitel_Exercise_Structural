#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
int number,i,digit,digit1,digit2,digit3,digit4;
cout<< " enter the number(4 digit) of cyriptology:";
cin>> number;
	
    for (i = 3; i >= 0; i--){
    	
        digit = (number / pow(10,i)); 
        number = number % 1000;
        digit = (digit+7) % 10;   
		 
	        if (i==3)
		    digit3 = digit;
		if (i==2)
		    digit4 = digit;
		if (i==1)
		    digit1 = digit;
		if (i==0)
		    digit2 = digit;
    }   
cout << "the number with cyrptoned:";
cout<< digit1 << digit2 << digit3 << digit4;
	
}
	
	
