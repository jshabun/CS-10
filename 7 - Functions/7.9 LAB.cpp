/*
Directions:
Write a program whose inputs are three integers, and whose outputs are the largest of the three values and the smallest of the three values.

Ex: If the input is 7 15 3, the output is:

largest: 15 
smallest: 3

Your program must define and call the following two functions. The LargestNumber function should return the largest number of the three input 
values. The SmallestNumber function should return the smallest number of the three input values.

	int LargestNumber(int num1, int num2, int num3)
	int SmallestNumber(int num1, int num2, int num3)
*/

#include <iostream>
using namespace std;

int LargestNumber (int num1, int num2, int num3) {
   int largest;
   
   if ((num1 > num2) && (num1 > num3)){
      largest = num1;
   }
   else if ((num2 > num1) && (num2 > num3)){
      largest = num2;
   }
   else {
      largest = num3;
   }
   
   return largest;
}

int SmallestNumber (int num1, int num2, int num3) {
   int smallest;
   
   if ((num1 < num2) && (num1 < num3)){
      smallest = num1;
   }
   else if ((num2 < num1) && (num2 < num3)){
      smallest = num2;
   }
   else {
      smallest = num3;
   }
   
   return smallest;
}

int main() {
   int userNum1;
   int userNum2;
   int userNum3;
   
   cin >> userNum1;
   cin >> userNum2;
   cin >> userNum3;
   
   cout << "largest: " << LargestNumber (userNum1, userNum2, userNum3) << endl;
   cout << "smallest: " << SmallestNumber (userNum1, userNum2, userNum3) << endl;

   return 0;
}
