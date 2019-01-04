#include<iostream>
using namespace std;
int main(){
	
  int side, rowPosition, size;

    cout << "Enter the square side: ";
    cin >> side;
    size = side;

        while ( side > 0 ) {
            rowPosition = size;

            while ( rowPosition > 0 ) {

                if ( size == side || side == 1 || rowPosition == 1 || rowPosition == size )

                    cout << '*';
                else
                    cout << ' ';
                    
                    --rowPosition;
            }

            cout << endl;
            --side;
        }

        cout << endl;

        return 0;
}
