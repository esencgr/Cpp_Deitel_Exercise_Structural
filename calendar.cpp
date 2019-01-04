#include<iostream>
#include<math.h>
using namespace std;
int main(){
int year, month, day;
<<<<<<< HEAD

cout << "enter year (-1 to exit):";
cin >> year;

	while(year != -1){

   	  switch (year){

   	    case 1995:

   	  	    for (month = 1; month <= 12; month++){

   	  	    	if  (month == 1)
   	  	    	    cout << "JANUARY"<< endl;
   	  	    	else if  (month == 2)
   	  	    	    cout << "FEBRUARY"<< endl;
				else if  (month == 3)
   	  	    	    cout << "MARCH"<< endl;
			    else if  (month == 4)
   	  	    	    cout << "APRï¿½L "<< endl;
				else if  (month == 5)
   	  	    	    cout << "MAY"<< endl;
			    else if  (month == 6)
   	  	    	    cout << "JUNE"<< endl;
				else if  (month == 7)
   	  	    	    cout << "JULY"<< endl;
			    else if  (month == 8)
   	  	    	    cout << "AUGUST"<< endl;
				else if  (month == 9)
   	  	    	    cout << "SEPTEMBER"<< endl;
				else if  (month == 10)
   	  	    	    cout << "OCTOBER"<< endl;
			    else if  (month == 11)
   	  	    	    cout << "NOVEMBER"<< endl;
				else if  (month == 12)
   	  	    	    cout << "DECEMBER"<< endl;

   	  	        if (month % 2 == 0){

				for(day = 1; day <= 30; day++){

				        if (month == 2 && day == 29)
					break;

=======
	
cout << "enter year (-1 to exit):";
cin >> year;
    
	while(year != -1){

   	  switch (year){
   	  	      
   	    case 1995:

   	  	    for (month = 1; month <= 12; month++){
   	  	    	
   	  	    	if  (month == 1)
   	  	    	    cout << "JANUARY"<< endl;
   	  	    	else if  (month == 2)
   	  	    	    cout << "FEBRUARY"<< endl; 
				else if  (month == 3)
   	  	    	    cout << "MARCH"<< endl;
			    else if  (month == 4)
   	  	    	    cout << "APRÝL "<< endl; 
				else if  (month == 5)
   	  	    	    cout << "MAY"<< endl;		 
			    else if  (month == 6)
   	  	    	    cout << "JUNE"<< endl; 
				else if  (month == 7)
   	  	    	    cout << "JULY"<< endl;	
			    else if  (month == 8)
   	  	    	    cout << "AUGUST"<< endl;		 
				else if  (month == 9)
   	  	    	    cout << "SEPTEMBER"<< endl;
				else if  (month == 10)
   	  	    	    cout << "OCTOBER"<< endl;	
			    else if  (month == 11)
   	  	    	    cout << "NOVEMBER"<< endl;		 
				else if  (month == 12)
   	  	    	    cout << "DECEMBER"<< endl;	
						 	 		 	    
   	  	        if (month % 2 == 0){
						 
				for(day = 1; day <= 30; day++){
					 	
				        if (month == 2 && day == 29)
					break;
					 	
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
					cout << "\t" <<day;
					if (day % 7 == 0)
					cout << endl;
			        }
<<<<<<< HEAD

			}

                        else
				for(day = 1; day <= 31; day++){

=======
			
			}
			
                        else 
				for(day = 1; day <= 31; day++){
					 	 
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
					cout << "\t" <<day;
					if (day % 7 == 0)
					cout << endl;
			}
   	  	        cout << endl;
<<<<<<< HEAD
				cout << "--------------------------------------------------------------"<< endl;
		    }

   	  	break;

   	  	case 1996:

   	  	    for (month = 1; month <= 12; month++){

   	  	    	if  (month == 1)
   	  	    	    cout << "JANUARY"<< endl;
   	  	    	else if  (month == 2)
   	  	    	    cout << "FEBRUARY"<< endl;
				else if  (month == 3)
   	  	    	    cout << "MARCH"<< endl;
			    else if  (month == 4)
   	  	    	    cout << "APRï¿½L "<< endl;
				else if  (month == 5)
   	  	    	    cout << "MAY"<< endl;
			    else if  (month == 6)
   	  	    	    cout << "JUNE"<< endl;
				else if  (month == 7)
   	  	    	    cout << "JULY"<< endl;
			    else if  (month == 8)
   	  	    	    cout << "AUGUST"<< endl;
				else if  (month == 9)
   	  	    	    cout << "SEPTEMBER"<< endl;
				else if  (month == 10)
   	  	    	    cout << "OCTOBER"<< endl;
			    else if  (month == 11)
   	  	    	    cout << "NOVEMBER"<< endl;
				else if  (month == 12)
   	  	    	    cout << "DECEMBER"<< endl;

   	  	        if (month % 2 == 0){

					for(day = 1; day <= 30; day++){

					 	if (month == 2 && day == 30)
					 	break;

=======
				cout << "--------------------------------------------------------------"<< endl;	   
		    } 
				  
   	  	break;  
   	  	    
   	  	case 1996:
	  	      	
   	  	    for (month = 1; month <= 12; month++){
   	  	    	
   	  	    	if  (month == 1)
   	  	    	    cout << "JANUARY"<< endl;
   	  	    	else if  (month == 2)
   	  	    	    cout << "FEBRUARY"<< endl; 
				else if  (month == 3)
   	  	    	    cout << "MARCH"<< endl;
			    else if  (month == 4)
   	  	    	    cout << "APRÝL "<< endl; 
				else if  (month == 5)
   	  	    	    cout << "MAY"<< endl;		 
			    else if  (month == 6)
   	  	    	    cout << "JUNE"<< endl; 
				else if  (month == 7)
   	  	    	    cout << "JULY"<< endl;	
			    else if  (month == 8)
   	  	    	    cout << "AUGUST"<< endl;		 
				else if  (month == 9)
   	  	    	    cout << "SEPTEMBER"<< endl;
				else if  (month == 10)
   	  	    	    cout << "OCTOBER"<< endl;	
			    else if  (month == 11)
   	  	    	    cout << "NOVEMBER"<< endl;		 
				else if  (month == 12)
   	  	    	    cout << "DECEMBER"<< endl;	
						 	 		 	    
   	  	        if (month % 2 == 0){
						 
					for(day = 1; day <= 30; day++){
					 	
					 	if (month == 2 && day == 30)
					 	break;
					 	
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
					 	cout << "\t" <<day;
					 	if (day % 7 == 0)
					 	cout << endl;
					 }
<<<<<<< HEAD

			}

                        else
				    for(day = 1; day <= 31; day++){

=======
			
			}
			
                        else 
				    for(day = 1; day <= 31; day++){
					 	 
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
					 	cout << "\t" <<day;
					 	if (day % 7 == 0)
					 	cout << endl;
				    }
   	  	        cout << endl;
<<<<<<< HEAD
			cout << "--------------------------------------------------------------"<< endl;
		   }

   	  	break;


   	  	default:
   	  		cout << " invalid year ";
   	  		break;

=======
			cout << "--------------------------------------------------------------"<< endl;	   
		   } 
				  
   	  	break;

   	  	
   	  	default:
   	  		cout << " invalid year ";
   	  		break;
   	  		
>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
         }
	 cout << endl;
         cout << "enter year  (-1 to exit):";
         cin >> year;
        }
    }
<<<<<<< HEAD
=======

>>>>>>> 1abcd82e6ce44b8cf6f60edae022b204c3e2cdd1
