#include<iostream>
using namespace std;
int main(){
float yol=0,performans=0,galon=0,toplam=0; //performans=kilometre/galon
int sayac=0;

	while (1){

		cout << "kac galon harcandi (cikis -1):";
		cin  >> galon;

		     if(galon == -1)
		     break;

		cout << "kac km yol alindi:";
		cin  >> yol;

		performans = yol/galon;
		cout << "performans:"<< performans;

		cout << endl;
		cout <<endl;

	        toplam += performans;
		sayac++;

        }

cout << "ortalama performans:"<< toplam/sayac;
}
