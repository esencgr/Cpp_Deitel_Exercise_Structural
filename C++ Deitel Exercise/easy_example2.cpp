#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int product=1,i;
	
	for (int i = 1; i <= 15; i+=2){
	product * = i;
	cout<< "-" << i;
	}
	
	cout << endl;
	cout << "odd numbers product of 1-15 :" << product;
}
