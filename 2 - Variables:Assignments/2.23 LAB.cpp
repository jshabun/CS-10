/*
Directions:
Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, and output the gas cost for 10 miles, 50 miles, and 400 miles.

Ex: If the input is 20.0 3.1599, the output is:

1.57995 7.89975 63.198 

Note: Real per-mile cost would also include maintenance and depreciation.
*/

#include <iostream>
using namespace std;

int main() {

   double carMilesGallon;
   double gasDollarsGallon;
   
   cin >> carMilesGallon;
   cin >> gasDollarsGallon;
   
   cout << (10*gasDollarsGallon)/carMilesGallon << ' ' << (50*gasDollarsGallon)/carMilesGallon << ' ' << (400*gasDollarsGallon)/carMilesGallon << endl;
   
   

   return 0;
}
