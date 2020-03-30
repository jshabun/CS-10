/*
Directions:
Write a function DrivingCost with input parameters drivenMiles, milesPerGallon, and dollarsPerGallon, that returns the dollar cost to drive those miles. All items are of type double. If the function is called with 50 20.0 3.1599, the function returns 7.89975.

Define that function in a program whose inputs are the car's miles/gallon and the gas dollars/gallon (both doubles). Output the gas cost for 10 miles, 50 miles, and 400 miles, by calling your DrivingCost function three times.

Ex: If the input is 20.0 3.1599, the output is:
1.57995 7.89975 63.198

Your program must define and call a function:
	double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)

Note: This is a lab from a previous chapter that now requires the use of a function.
*/

#include <iostream>
using namespace std;

double DrivingCost (double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
   double drivingCost;
   
   drivingCost = drivenMiles / milesPerGallon * dollarsPerGallon;
   
   return drivingCost;
}

int main() {
   double milesPerGallon;
   double dollarsPerGallon;
   
   cin >> milesPerGallon;
   cin >> dollarsPerGallon;
   
   cout << DrivingCost (10, milesPerGallon, dollarsPerGallon) << " ";
   cout << DrivingCost (50, milesPerGallon, dollarsPerGallon) << " ";
   cout << DrivingCost (400, milesPerGallon, dollarsPerGallon) << endl;

   return 0;
}
