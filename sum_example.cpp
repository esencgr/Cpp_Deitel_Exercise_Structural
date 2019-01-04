#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
float value,sum=0.0,avarage=0.0;
int count=0,piece3;
	
cout << "enter piece for integers:";
cin >> piece;
	
	for(count = 0;  count<piece;   count++){
		
		cout << "enter intgers:";
		cin >> value;
		sum += value;
		
	}

avarage = sum/count;
cout << "avarage:" << (float)avarage << endl;
cout << "sum:"<< (float)sum;
}
