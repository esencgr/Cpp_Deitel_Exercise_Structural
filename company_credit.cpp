#include<iostream>
#include<math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    
float credit_new,credit,balance;
int no;
srand(time(NULL));
    for (int i=0 ;i<3 ; i++){
    	no = i;
    	balance = 1+(rand()%10000);
    	credit = 1+(rand()%10000);
    	credit_new = credit/2;
	cout <<" no:"<< i <<endl;
    	cout <<" balance " << " - " << (float)balance<<endl;
    	cout <<" credit " << " - " << (float)credit<<endl;
	cout <<" new credit "<< " - " << (float)credit_new<<endl;

	      if(balance>(credit_new))
	      cout << "credit exceeded !!!!!" << endl;

        cout <<"---------------------------"<< endl;
	}
}

