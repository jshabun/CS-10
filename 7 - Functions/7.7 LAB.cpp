/*
Directions:
A pedometer treats walking 2,000 steps as walking 1 mile. Write a program whose input is the number of steps, and whose output is the miles walked.

Ex: If the input is 5345, the output is:
2.6725

Your program must define and call a function:
	double StepsToMiles(int userSteps)
*/

#include <iostream>
using namespace std;

double StepsToMiles (int userSteps){
   double userMiles;
   
   userMiles = userSteps / 2000.0;
   
   return userMiles;
}

int main() {
   int steps;
   
   cin >> steps;
   
   cout << StepsToMiles(steps) << endl;

   return 0;
}
