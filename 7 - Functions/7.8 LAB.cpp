/*
Directions:
Write a function MaxMagnitude with two integer input parameters that returns the largest magnitude value. Use the function in a program that takes two integer inputs, 
and outputs the largest magnitude value.

Ex: If the inputs are 5 7, the function returns:
7

Ex: If the inputs are -8 -2, the function returns:
-8

Note: The function does not just return the largest value, which for -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.

Your program must define and call a function:
	int MaxMagnitude(int userVal1, int userVal2)
*/

#include <iostream>
#include <cmath>
using namespace std;

int MaxMagnitude (int userVal1, int userVal2) {
   int largestMagnitude;
   
   if (fabs(userVal1) > fabs(userVal2)){
      largestMagnitude = userVal1;
   }
   else {
      largestMagnitude = userVal2;
   }
   
   return largestMagnitude;
}

int main() {
   int magnitude1;
   int magnitude2;
   
   cin >> magnitude1;
   cin >> magnitude2;
   
   cout << MaxMagnitude (magnitude1, magnitude2) << endl;

   return 0;
}
