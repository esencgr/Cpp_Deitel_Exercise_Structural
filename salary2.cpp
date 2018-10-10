#include<iostream>
using namespace std;
int main(){
    
float saat,ucret,maas ;
	 
    while (1){
    	
       cout << "calisma saatini gir(cikis-1):";
       cin >> saat;
        	
    	  if (saat == -1)
    	      break;
    	
    	cout << "ucret($0.00):";
    	cin >> ucret ;
        
        maas = saat * ucret;
        
          if (saat > 40)
              maas = (saat*ucret) + ((saat-40) * (0.5) * ucret);
    	
    	cout << "brut maas:"<< (float)maas << "$" << endl;
		cout << "-------------------------" << endl; 	
    }
}

