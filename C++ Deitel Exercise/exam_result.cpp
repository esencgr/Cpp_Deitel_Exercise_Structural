#include<iostream>
using namespace std;

float avarage(float sum , float totals){
	float av;
	return 	av = sum / totals;
}

int main(){
int student=1, totals , point , succesful=0 , unsuccesful=0 ,sum=0;

	cout << "available of class:";
	cin >> totals;
	cout <<"-------------------"<< endl;
	
	while (student <= totals){
		cout << "student's point(0-100):";
		cin >> point;
		   if (point <= 50)
		   unsuccesful += 1;
		   else
		   succesful += 1;
		    
		student += 1;
		sum += point;	
	}
cout<< "succesful student number:"<< succesful << endl;
cout<< "unsuccesful student number:"<< unsuccesful<< endl;
cout<< "avarage of class:"<< avarage(sum,totals);
}
