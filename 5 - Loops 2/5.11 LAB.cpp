/*
Directions:
Write a program whose input is two integers, and whose output is the first integer and subsequent increments of 10 as long as the value is less than or equal to the second integer.

Ex: If the input is -15 30, the output is:
-15 -5 5 15 25

Ex: If the second integer is less than the first as in 20 5, the output is:

Second integer can't be less than the first.
For coding simplicity, output a space after every integer, including the last.
*/

#include <iostream>
using namespace std;

int main() {

   int number1 = 0;
   int number2 = 0;
   
   cin >> number1 >> number2;
   
   if (number2 < number1){
      cout << "Second integer can't be less than the first.";
   }
   else{
      for (int i = number1; i <= number2; i += 10){
         cout << i << " ";
      }
   }
   
   cout << endl;

   return 0;
}
