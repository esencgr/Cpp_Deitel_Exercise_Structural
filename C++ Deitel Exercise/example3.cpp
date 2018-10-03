#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
int deger;
cout<<"sayi:";
cin >> deger;
	
	switch (deger % 2){
		case(0):
			cout<< " sayi cift sayidir "<<endl;
			break;
			
		case (1):
			cout<< " sayi tek sayidir "<<endl;
			break;
			
	}
}

