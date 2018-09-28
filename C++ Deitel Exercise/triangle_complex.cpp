#include<iostream>
#include<math.h>
using namespace std;
int main(){
        
int counter=0,side,small,middle=0,hipo,first,temp;
cout << "enter the sides of triangel "<< endl;
cin >> hipo ;
first = hipo;
    while (counter < 2){
        cin >> side;
        if (side > hipo){
		 middle = hipo;
		 hipo = side;    
        }
	else if (side > middle) 
	         middle = side;
			 
        if (first != hipo  &&  first != middle)
		  small = first;
		    
	else if(side <= middle)
		  small = side;
	counter++;
     }   
cout << " hipo:"<< hipo << endl;
cout << " middle:"<< middle << endl ; 
cout << " small:"<< small << endl;

        if (hipo*hipo== middle*middle + small*small)
            	
            cout << "The three numbers could be sides of a right triangle" << endl;
			
	else
            cout << "The three numbers probably are not the sides of a right triangle" << endl;
  
            cout << "hipo:"<< hipo ;
            
            return 0;       
 }

