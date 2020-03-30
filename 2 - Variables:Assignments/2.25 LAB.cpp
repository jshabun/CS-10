/*
Directions:
Given three floating-point numbers x, y, and z, output x to the power of y, x to the power of (y to the power of z), the absolute value of x, and the square root of (xy to the power of z).

Ex: If the input is 5.0 6.5 3.2, the output is:

34938.6 1.29951e+279 5 262.43 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;
   
   cin >> x;
   cin >> y;
   cin >> z;

   cout << pow(x, y) << " ";
   cout << pow(x, pow(y, z)) << " ";
   cout << fabs(x) << " ";
   cout << sqrt(pow((x*y), z)) << endl;

   return 0;
}
