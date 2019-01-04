#include<iostream>
#include<math.h>
using namespace std;
int main(){
/*	int tamsayi;
	char karakter;
	cout << "karakter gir:";
	karakter=getchar();
	cout << "sayi gir:";
	cin >> tamsayi;
	cout<< "TAMSAYI:"<< tamsayi<<endl;
	cout << "KARAKTER:"<< karakter;
	cout<<endl;
*/	
	int sayac=2,x,toplam=0;
	do{
	cout<<sayac<<endl;
	sayac+=2;
	}while(sayac<100);
	
	for(x=1; x<=4 ;x++)
	toplam+=x;
	cout<< toplam<< endl;
	
}
