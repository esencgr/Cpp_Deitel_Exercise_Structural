// Exercise 2.50 Solution
#include <iostream>
#include<stdio.h>
using namespace std;

      int main() {
           
		   int grade, gradeTotal = 0, gradeCount, aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

            cout << "Enter the letter grades."<< "\nEnter the EOF character to end input.\n";

        while ( ( grade = cin.get() ) != EOF ) {

               switch ( grade ) {
                    case 'A': case 'a':
                      gradeTotal += 4;
                      ++aCount;
                      break;
                    case 'B': case 'b':
                      gradeTotal += 3;
                      ++bCount;
                      break;
                    case 'C': case 'c':
                      gradeTotal += 2;
                      ++cCount;
                      break;
                    case 'D': case 'd':
                      ++gradeTotal;
                      ++dCount;
                      break;
                    case 'F': case 'f':
                      ++fCount;
                      break;
                    case ' ': case '\n':
                      break;
                    default:
                      cout << "Incorrect letter grade entered."
                           << " Enter a new grade.\n";
                        break;
                } 
        }

                gradeCount = aCount + bCount + cCount + dCount + fCount;

                if ( gradeCount != 0 )
                cout << "\nThe class average is: " <<  (double) ( gradeTotal ) / gradeCount<< endl;

      return 0;
 }
