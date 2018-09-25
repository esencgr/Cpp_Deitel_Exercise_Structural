#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int no,quantity;
	double total=0.0;
	
	cout<< "enter product code (exit(-1)):";
	cin >>no;
	
	while (no!=-1){
		cout<<"quantity:";
		cin >> quantity;
		
		switch (no){
			
			case 1: 
		    total+=quantity*2.98;
				break;
			case 2: 
		    total+=quantity*4.50;
				break;	
			case 3: 
		    total+=quantity*9.98;
				break;
			case 4: 
		    total+=quantity*4.49;
				break;	
			case 5: 
		    total+=quantity*6.87;
				break;	
			default:
				cout << "invalid product code!!"<<endl;
				break;
		}
		
			cout<< "enter product code (exit(-1)):";
	        cin >>no;
	
	}
	cout<< "total:"<<(double)total<<endl;
	
	return 0;
}
