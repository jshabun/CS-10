/*
Directions:
Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in binary. For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2

Note: The above algorithm outputs the 0's and 1's in reverse order. You will need to write a second function to reverse the string.

Ex: If the input is 6, the output is:
110

Your program must define and call the following two functions. The IntegerToReverseBinary function should return a string of 1's and 0's representing the integer in binary (in reverse). The ReverseString function should return a string representing the input string in reverse.

	string IntegerToReverseBinary(int integerValue)
	string ReverseString(string userString)

Note: This is a lab from a previous chapter that now requires the use of a function.
*/

#include <iostream>
using namespace std;

string IntegerToReverseBinary (int integerValue) {
   string myString = "";
   char myChar;
      
   while (integerValue > 0) {
      myChar = '0' + (integerValue % 2);
      integerValue = integerValue / 2;
      myString = myString + myChar;
   }
   return myString;
}

string ReverseString (string userString) {
   string myString = "";
   
   for (unsigned int i = 0; i < userString.length(); ++i) {
      myString = userString[i] + myString;
   }
   return myString;
}

int main() {
   int input;
   
   cin >> input;
   
   cout << ReverseString(IntegerToReverseBinary(input)) << endl;

   return 0;
}
