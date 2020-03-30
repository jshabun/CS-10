/*
Directions:
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers. For this program, adjust the values by subtracting the smallest value from all the values. The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain less than 20 integers.

Ex: If the input is 5 30 50 10 70 65, the output is:
20 40 0 60 55

For coding simplicity, follow every output value by a space, even the last one.

Your program must define and use the following function:
	int GetMinimumInt(vector<int> listInts)

Note: This is a lab from a previous chapter that now requires the use of a function.
*/

#include <iostream>
#include <vector> 
using namespace std;

/*int GetMinimumInt (vector<int> listInts) {
   for ( int i = 0; i < input; ++i){
      return listInts[i] - min
      cout << listInts[i] - min << " ";
   }
}

*/

int main() {
   int input; 
   int min; 
   int temp;
   vector<int> listInts;
   
   cin >> input;
   
   for(int i = 0; i < input; ++i){
      cin >> temp;
      
      listInts.push_back(temp);
      
      if (i == 0) {
         min = temp;
      }
      else if (min > temp){
         min = temp;
      }
   }
   
   for ( int i = 0; i < input; ++i){
      cout << listInts[i] - min << " ";
   }
   
   cout << endl;
   //GetMinimumInt();

   return 0;
}
