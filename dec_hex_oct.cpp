#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
cout << "Decimal\t\tBinary\t\tOctal\tHexadecimal\n";
	
    for ( int loop = 1; loop <= 256; ++loop ) { 
	 
	cout << dec << loop << "\t\t";

    // Output binary number
        int number = loop;
        cout << ( number == 256 ? '1' : '0' );
        int factor = 256;

        do {
            cout << ( number < factor && number >= ( factor / 2 ) ? '1' : '0' );
            factor /= 2;
            number %= factor;
        } while ( factor > 2 );

    // Output octal and hexadecimal numbers
    cout << '\t' << oct << loop << '\t' << hex << loop << endl;
    }

 return 0;	 
	 
}
