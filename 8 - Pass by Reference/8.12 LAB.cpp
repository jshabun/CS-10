/*
Directions:
Write a program with total change amount as an integer input that outputs the change using the fewest coins, one coin type per line. The coin types are dollars, quarters, dimes, nickels, and pennies. Use singular and plural coin names as appropriate, like 1 penny vs. 2 pennies.

Ex: If the input is:
0

or less, the output is:
no change

Ex: If the input is:
45

the output is:
1 quarter
2 dimes 

Your program must define and call the following function.
	void ExactChange(double userTotal, int& numDollars, int& numQuarters, int& numDimes, int& numNickels, int& numPennies)

Note: This is a lab from a previous chapter that now requires the use of a function.
*/

#include <iostream>
#include <vector> 
using namespace std;

void ExactChange (double userTotal, int& numDollars, int& numQuarters, int& numDimes, int& numNickels, int& numPennies) {
   while ((userTotal - 100) >= 0) {
      ++numDollars;
      userTotal -= 100;
   }
   
   while ((userTotal - 25) >= 0) {
      ++numQuarters;
      userTotal -= 25;
   }
   
   while ((userTotal - 10) >= 0) {
      ++numDimes;
      userTotal -= 10;
   }
   
   while ((userTotal - 5) >= 0) {
      ++numNickels;
      userTotal -= 5;
   }
   
   while ((userTotal - 1) >= 0) {
      ++numPennies;
      userTotal -= 1;
   }
}

int main() {
   int inputVal;
   int dollars = 0;
   int quarters = 0;
   int dimes = 0;
   int nickels = 0;
   int pennies = 0;
   
   cin >> inputVal;
   
   if (inputVal <= 0) {
      cout << "no change" << endl;
   }
   else {
      ExactChange (inputVal, dollars, quarters, dimes, nickels, pennies);
   }
   
   if (dollars > 0) {
      cout << dollars << " dollar";
      if (dollars > 1) {
         cout << "s";
      }
      cout << endl;
   }
   
   if (quarters > 0) {
      cout << quarters << " quarter";
      if (quarters > 1) {
         cout << "s";
      }
      cout << endl;
   }
   
   if (dimes > 0) {
      cout << dimes << " dime";
      if (dimes > 1) {
         cout << "s";
      }
      cout << endl;
   }
   
   if (nickels > 0) {
      cout << nickels << " nickel";
      if (nickels > 1) {
         cout << "s";
      }
      cout << endl;
   }
   
   if (pennies > 0) {
      cout << pennies << " penn";
      if (pennies > 1) {
         cout << "ies";
      } 
      else {
         cout << "y";
      }
      cout << endl;
   }
   
   return 0;
}
