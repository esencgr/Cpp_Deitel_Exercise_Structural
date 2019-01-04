#include<iostream>
#include<stdio.h>
#include<math.h> 
using namespace std;
int main(){
     
     int letter_grade;
     int a_total=0,b_total=0,c_total=0,d_total=0,f_total=0,grade_total=0,grade_count;
     
     cout<< "enter student letter grade:";
     cout<< "enter EOF to EXIT!"<< endl;
    
     while (( letter_grade = cin.get() ) != EOF){  ///EOF(ctrl-z)
	
		 
     	switch(letter_grade){
     		 
     		case'a':case'A':
		       a_total++;
		       grade_total+=4;
		break;
		case'b':case'B':
			b_total++;
			grade_total+=3;
		break;
		case'c':case'C':
			c_total++;
			grade_total+=2;
		break;  
		case'd':case'D':
			d_total++;
			grade_total+=1;
		break;
		case'f':case'F':
			f_total++;
		break;  
		case ' ': case '\n':
                break;
                default:
		        cout << "Incorrect letter grade entered."
                        << " Enter a new grade.\n";
                break;
                 
	}
	
    }
grade_count=  a_total +  b_total + c_total +  d_total +  f_total;
cout << "A grade: "<< a_total << endl;
cout << "B grade: "<< b_total << endl;
cout << "C grade: "<< c_total << endl;
cout << "D grade: "<< d_total << endl;
cout << "F grade: "<< f_total << endl;
cout << "avarage grade:" << (double)grade_total / (grade_count) << endl;
return 0;
}
