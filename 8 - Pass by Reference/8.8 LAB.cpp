/*
Directions:
Write a program whose input is two integers and whose output is the two integers swapped.

Ex: If the input is 3 8, then the output is
8 3

Your program must define and call a function. SwapValues returns the two values in swapped order.
	void SwapValues(int& userVal1, int& userVal2)
*/

#include <iostream>
using namespace std;

void SwapValues (int& userVal1, int& userVal2) {
   int temp;
   
   temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
}

int main() {
   int num1;
   int num2;
   
   cin >> num1;
   cin >> num2;
   
   SwapValues(num1, num2);
   
   cout << num1 << " " << num2 << endl;

   return 0;
}