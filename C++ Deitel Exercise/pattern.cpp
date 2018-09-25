#include<iostream>
using namespace std;
int main(){
	int kenar,i,j;
	cout<< "karenin kenari: ";
	cin>>kenar; 
	
	for (i=1;  i<=kenar;  i++){
		
		for (j=1;  j<=kenar;  j++){
                
                if (i%2 != 0 && j == 1)
		        cout<<"*"; 
		        else 
		        cout<<" *";
			        
	    }           
	    cout << endl ;
	}
}
