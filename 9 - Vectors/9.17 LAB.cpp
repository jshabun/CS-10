/*
Directions:
Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow.

Ex: If the input is 5 10 5 3 21 2, the output is:
2 3

You can assume that the list of integers will have at least 2 values.

To achieve the above, first read the integers into a vector.

Hint: Make sure to initialize the second smallest and smallest integers properly.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

   int input;
   int number;
   

   cin >> input;

   vector<int> integerList;
   
   for (int i = 0; i < input; ++i) {
      cin >> number;
         integerList.push_back(number);
   }
   
   int n1 = integerList[0]; 
   int n2 = integerList[1]; 
   int num; 
   int temp;
   
   if (n1 > n2) {
      temp = n1;
      n1 = n2;
      n2 = temp;
    }
    
   for (int i = 2; i < input; ++i) {
      num = integerList[i];
      if (num < n1) {
         n2 = n1;
         n1 = num;
      } 
      else if(num < n2) {
         n2 = num;
      }
   }

   cout << n1 << " " << n2 << endl;

   return 0;
}
