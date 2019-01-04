#include<iostream>
#include<math.h>
using namespace std;
int main(){

int sum=0,i;
	
	for (int i = 2; i <= 30;  i+= 2){
	sum += i;
	cout << "-" <<i;
	}
		
cout << endl;
cout << "even numbers sum of 2-30 :" <<sum;
}
