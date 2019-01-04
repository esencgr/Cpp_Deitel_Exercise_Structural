#include<iostream>
using namespace std;
int main(){
	
int number, counter=0 , counter_2=0,number_m,digit ;
cout << "enter a number:";
cin >> number;
number_m = number;
cout << endl;
    
    while (number>1){
        number = number/10;
        counter = counter+1;
    }
    
cout<< "the number is include " << counter << " digit" << endl;
         
    for (int i=0 ;  i<counter;  i++){
         	 
        digit = number_m % 10;
        number_m -= digit;
        number_m /= 10;
         	 
	      if (digit == 7)
		counter_2 += 1;
					 
    } 
cout<< "the number is include "<< counter_2 << " digit of value -7-"<<endl;
}

