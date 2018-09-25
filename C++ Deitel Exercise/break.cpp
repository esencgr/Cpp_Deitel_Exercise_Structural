// Exercise 2.62 Solution
 #include <iostream>

using std::cout;
using std::endl;

int main() {
bool breakOut = false;
int x;
    for ( x = 1; x <= 10 && !breakOut; ++x ) {
        if ( x == 4 )
        breakOut = true;
        cout << x << ' ';
    }

    cout << "\nBroke out of loop at x = " << x << endl;
    return 0;
}
