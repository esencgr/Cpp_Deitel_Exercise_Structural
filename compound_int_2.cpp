#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
float principal,interest,compound_interest;
int year;
cout << " principal:";
cin >> principal;	
cout<< "year"<<"\t\t"<<"comp_i(%5)"<<"\t%6\t\t%7\t\t%8\t\t%9\t\t%10"<< endl;
cout<< endl;
	
    for(year = 1; year <= 10; year++){
	cout << year;
	    
        for (interest = 0.05; interest <= 0.1; interest += 0.01){
             cout<< "\t";
             compound_interest = principal * (pow (1+interest,year) );
	     cout<< "\t"<< float(compound_interest);
        }
     
    cout<<endl;	
    }
}
