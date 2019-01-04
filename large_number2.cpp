#include<iostream>
using namespace std;
int main(){
	
int sayici=0,sayi,byk_sayi,ikinci_byk=0;
cout << "ilk sayi:";
cin >> byk_sayi;
    
  while (sayici < 5){
        cin >> sayi;
      
     if (sayi > byk_sayi){
	ikinci_byk = byk_sayi;
	byk_sayi = sayi;
     }
     
     else if (sayi > ikinci_byk)
        ikinci_byk = sayi;
	
   sayici++;
   }
     
cout << " en buyuk 1. sayi:" << byk_sayi;
cout << " en buyuk 2. sayi:" << ikinci_byk;  	  
}
