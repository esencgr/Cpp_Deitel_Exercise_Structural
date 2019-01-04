#include<iostream>
using namespace std;
#define PI 3.14159 
int main ()
{
float r;

cout<<"radius:";
cin>>r;
cout<<"diameter:"<<(float)2*r<<endl;
cout<<"circles ference:"<<(float)(2*PI*r)<<endl;
cout<<"circles area:"<<(float)(PI)*(r)*(r);
    
}
