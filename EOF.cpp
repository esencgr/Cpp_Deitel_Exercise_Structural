#include"iostream"

using namespace std;

 

int main(){
 char character;
 cout << "EOF: " << cin.eof() <<endl
      << "Enter characters : " <<endl;


 while( (character = cin.get()) != EOF ){
    cout.put(character);
    cout <<" and eof is "<< cin.eof() <<endl;
 }


 cout <<"End of EOF : " << cin.eof() <<endl
      <<"Char : " << character <<endl;
 return 0;
}
