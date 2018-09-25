#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int bosluk=1,yildiz=1;
	
	for (int i = 1;  i<=10;  i++){
	    for (int j = 10; j>=1;  j--){
	    	
	    	if (i <= j)
	    	    cout<< "*";
	    	else 
	    	    cout<<" ";		
		}
		cout << endl;
	}
}
