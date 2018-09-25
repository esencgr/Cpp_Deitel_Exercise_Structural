// Exercise 2.60 Solution
 #include <iostream>

using std::cout;
using std::endl;

int main() {
	
int x;
    for ( x = 1; x <= 10 ; ++x ) {
    	
        if ( x == 5 )
        x++;
        
		cout << x << ' ';
    }

    cout << "\nBroke out of loop at 5" <<  endl;
    return 0;
}
