#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
     
     char letter_grade;
     int a_total=0,b_total=0,c_total=0,d_total=0,f_total=0,i=10;
     
     cout << "enter student letter grade:";
     cout << "enter EOF to EXÝT!"<< endl;
    
     while (i > 0){
     	
        cin >> letter_grade;
		 
     	switch(letter_grade){
     		 
     		case'a':case'A':
			 a_total++;
		break;
		case'b':case'B':
			 b_total++;
		break;
		case'c':case'C':
			 c_total++;
	        break;  
		case'd':case'D':
			 d_total++;
		break;
		case'f':case'F':
			 f_total++;
		break;  
		default:
	              cout << "false letter , try again!" << endl;
		break;
		}
		i--;		
	 }
	 
    cout << "A grade: "<< a_total << endl;
    cout << "B grade: "<< b_total << endl;
    cout << "C grade: "<< c_total << endl;
    cout << "D grade: "<< d_total << endl;
    cout << "F grade: "<< f_total << endl;
    
return 0;
}
