#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int number,counter=0,number_2,sum=0,temp,temp_1;
	
	cout << " enter the number:";
	cin >> number;
	temp = number;
	temp_1 = number;
	
	while (temp > 0){
		temp /= 10;
		counter++;
	}
	  cout << "the number include digit " << " " << counter << endl;
	  
	for (int i=counter-1;  i>=0;  i--){
		
		number_2 = number % 10;
		sum = sum + (number_2 * pow(10,i));
		number = number - number_2;
		number = number / 10;	
	}
	
	if(sum == temp_1){
		cout << "the number is palindrome palindrome because " << " " << "the opposite of number "<< sum << endl;	
	}
	else {
		
	    cout << "the number is NOT palindrome because " << " " << "the opposite of number: "<< sum << endl;	
	}

	
}

