#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
int i,temp;
long int number;
cout << "enter number for factoriel:";
cin >> number ;
temp = number;

for(i=number-1 ; i>=1 ;i--)
	number = number * (i);

cout << temp << "!=" <<number;
}
