#include<iostream>
#include <math.h>
using namespace std;
int main(){

int number, counter=0,number_m,digit=0,sum=0;
cout << "enter a number:";
cin >> number;
number_m = number;
cout << endl;
    
    while (number>=1){
        
	number = number/10;
	counter = counter + 1;
    }    
cout<< "the number is include "<< counter << " digit"<<endl;
    
    for (int i=0; i<counter; i++){
         	 
        digit = number_m % 10;
        number_m -= digit;
        number_m /= 10;
        cout << "digits:"<<digit<<endl;
        sum = sum + (digit*(pow(2,i)));
    }
          
cout << "the number to binary:"<< sum << endl;
}

