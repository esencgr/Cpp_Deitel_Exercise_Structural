#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
float principal,interest,compound_interest;
int year;
cout<< " principal:";
cin>> principal;
cout<< " interest:";
cin>> interest;
cout<< "year" << "       "<< "compound_interest" <<endl;

	    for(year = 1 ; year <= 10 ; year++){
	    	
	        compound_interest = principal * (pow (1+interest,year));
	    	cout<< year << "          "<< float(compound_interest) << endl;	
            
	    }
}
