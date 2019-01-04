
#include<iostream>
#include<math.h>
using namespace std;
int main(){
<<<<<<< HEAD

float value,sum=0.0,avarage;
int count=0;

	cout << "enter integers (exit 9999):";
	cin >> value ;

	while (value!=9999){

=======
	
float value,sum=0.0,avarage;
int count=0;
	
	cout << "enter integers (exit 9999):";
	cin >> value ;
	
	while (value!=9999){
		
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
	    sum += value;
	    count++;
	    cout << "enter integers (exit 9999):";
	    cin >> value ;
<<<<<<< HEAD

=======
	
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
	}
avarage = sum/count;
cout<< "avarage:"<< (float)avarage;
}
