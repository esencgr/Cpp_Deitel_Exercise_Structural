#include<iostream>
#include<math.h>
using namespace std;

int main(){

int product=1,number,temp;
cout << " enter a number: ";
cin >> number ;
temp = number;
	while(number > 0){
		
	    product = product * (number);
            number--;	
			
	}
	
	if (temp == 0)
	   product = 1;
	
cout << temp << "!= " << product;
}
