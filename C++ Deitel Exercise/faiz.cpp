#include<iostream>
using namespace std;
int main(){

float anapara,faiz_orani,gun,faiz;
	 
    while (1){
    	
    	cout << "anapara(cikis-1):";
    	cin >> anapara;
        	
    	if (anapara == -1)
    	break;
    		
    	cout << "faiz orani:";
    	cin >> faiz_orani;
    	
        cout << "gun:";
    	cin >> gun;
    	

    	faiz = anapara * faiz_orani * gun/365;
    	
    	cout << "faiz:"<< (float)faiz <<"$"<< endl;
		cout << "-------------------------"<< endl; 	
	}
}

