#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
int value,piece,small;
	
cout << "piece of integers:";
cin >> piece;
cout << "enter integers:";
cin >> small;
	
        for(int i = 0;   i<piece-1;   i++){
	
	   cin >> value;
	
	   if(value < small)
	   small = value;	
	    
	}
cout << "smallest number :" << small;	   
}
