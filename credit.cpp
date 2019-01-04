#include<iostream>
using namespace std;
int main(){
	
int hesap; 
float ilk_bakiye,harcama,kredi,kredi_limit,son_bakiye;
	 
	while (1){
		
	  cout<< "hesap no(cikis -1):";
	  cin >> hesap;

	    if(hesap == -1)
	    break;
		
		cout << "ilk bakiye:";
		cin  >> ilk_bakiye;    
		cout << "toplam harcama:";
		cin  >> harcama;		
	        cout << "toplam kredi:";
		cin  >> kredi;
	        cout << "kredi limiti:";
		cin  >> kredi_limit;
		cout <<"----------------------------------"<<endl;
		son_bakiye = ilk_bakiye + harcama-kredi;
	        cout << "hesap no:"<< hesap;
	        cout << endl;
	        cout << "kredi limiti:"<< (float)kredi_limit;
	        cout << endl;
		cout << "son_bakiye:"<< (float)son_bakiye;
	        cout << endl;
	    
	    if (kredi_limit < son_bakiye)
		cout <<"kredi limiti asildi." <<endl;
	    else 
		cout <<"yapilabilecek harcama tutari:" <<(float)kredi_limit-son_bakiye<<endl;
		   
		cout <<"---------------------------------"<<endl ;
	        cout <<endl;
		
	}
}



