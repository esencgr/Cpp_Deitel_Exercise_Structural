	 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	    
	    int number,loop;
	    cout << "enter number: ";
	    cin >> loop;
	    
	    number = loop;	    
        while (loop > 1){
           loop = number;	
           number %= 2;
           loop /= 2;	

		   cout << number; 	

		}
}
