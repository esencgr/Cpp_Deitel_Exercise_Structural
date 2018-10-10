#include<iostream>
using namespace std;
int main(){
	
int sayici,sayi,byk_sayi=0;
cout << "sayilar:" << endl;
	
    while (sayici < 10){
    	cin >> sayi;
    	if (sayi > byk_sayi)
	        byk_sayi = sayi;
	        sayici++;
    }
cout<< " en buyuk sayi:" << byk_sayi;	  
}
