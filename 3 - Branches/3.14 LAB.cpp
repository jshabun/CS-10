/*
Directions:
The Chicago Bulls with Michael Jordan won an astounding 6 NBA championships in the 1990s, in 1991, 1992, 1993, 1996, 1997, and 1998. 
Write a program that takes as input a year, and outputs "First championship" for 1991, "Second championship" for 1992, etc. For other 
years, output "No championship". If the input is 1998, the output is:

Sixth championship
*/

#include <iostream>
using namespace std;

int main() {

   int year;
   
   cin >> year;
   
   if (year == 1991){
      cout << "First championship" << endl;
   }
   else if (year == 1992){
      cout << "Second championship" << endl;
   }
   else if (year == 1993){
      cout << "Third championship" << endl;
   }
   else if (year == 1996){
      cout << "Fourth championship" << endl;
   }
   else if (year == 1997){
      cout << "Fifth championship" << endl;
   }
   else if (year == 1998){
      cout << "Sixth championship" << endl;
   }
   else{
      cout << "No championship" << endl;
   }

   return 0;
}
