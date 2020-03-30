/*
Directions:
Write a program whose inputs are three integers, and whose output is the largest of the three values.

Ex: If the input is 7 15 3, the output is:

15
*/

#include <iostream>
using namespace std;

int main() {
   
   int int1;
   int int2;
   int int3;
   int largest;
   
   cin >> int1;
   cin >> int2;
   cin >> int3;
   
   if (int1 > int2){
      largest = int1;
   }
   else{
      largest = int2;
   }
   
   if (largest > int3){
      largest = largest;
   }
   else{
      largest = int3;
   }
   
   cout << largest << endl;
   
   return 0;
}