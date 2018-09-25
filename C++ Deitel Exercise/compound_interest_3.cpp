#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
int principal,compound_interest,cent,year;
float interest=0.05;
cout << " principal:";
cin >> principal;
cout <<" interest:"<< interest << endl;
cout << "year" << "\t" <<"compound_interest" << endl;
	 for(year = 1; year <= 10 ; year++){
	    
	    compound_interest = principal*( pow (1+interest,year) );
	    cent = compound_interest % 100;
	    cout << year << "\t"<< compound_interest <<".";
	    	    
	    	if(cent < 10)
	    	    cout << "0" << cent << endl;
	    	else 
	    	    cout << cent << endl;	
		}
}
