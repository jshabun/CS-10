/*
Directions:
Statistics are often calculated with varying amounts of input data. Write a program that takes any number of non-negative integers as input, and outputs the average and max. A negative integer ends the input and is not included in the statistics.

Ex: When the input is 15 20 0 5 -1, the output is:

10 20

You can assume that at least one non-negative integer is input.
*/

#include <iostream>
using namespace std;

int main() {
   int max = 0;
   int num = 0;
   int count = 0;
   double average = 0;
   
    while (num >= 0) {
        cin >> num;
        if (num >= 0) {
            if (num > max){
               max = num;
            }
            average += num;
            ++count;
        }
    }
    if (count > 0) {
        average /= count;
    }
    cout << average << " " << max << endl;
    
   return 0;
}
