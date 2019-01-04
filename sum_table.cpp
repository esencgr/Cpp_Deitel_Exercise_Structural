#include<iostream>
using namespace std;
int main(){
	
   cout <<"A\tA+2\tA+4\tA+6\t"<< endl;
   cout << endl;

   for(int i=1;  i<=15;  i++){
   	   
   	    if (i % 3 == 0)
    	cout << i << "\t" << i+2 << "\t" << i+4 << "\t" << i+6 << endl;
   
   	
   }

}
