#include<iostream>
using namespace std;
int main(){  
float satis,maas;
    while (1){
    	cout << "satis tutari(cikis-1):";
    	cin >> satis;
     		
    	    if (satis == -1)
    	       break;
    	
    	maas = 200 + (satis*9/100);
    	cout << "maas:"<< (float)maas << "$" <<endl;	
    }
}

