/*#include<iostream>
using namespace std;
int main(){
	float avarage;
	float sum=0,count =0,point=0;
	
    do{
		
	sum+=point; 
	count++;
        cout << "exam result(-1 exit):";

	cin>point;
 
     }while (point!=-1);   
     
        count-=1;
	
	cout<< "avarage:"<< (float)(sum/count);
	return 0;
	
}*/
#include<iostream>
using namespace std;
int main(){
float avarage;
float sum = 0,count = 0;
int point;

	while (point != -1){
            cout << "exam result(-1 exit):";
	    cin >> point;
	        if(point == -1)
	        break;
	    sum += point;
            count++;
	}  
cout<< "avarage:"<< (float)(sum/count);
return 0;	
}
