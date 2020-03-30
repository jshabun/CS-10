/*
Directions:
The following equations estimate the calories burned when exercising (source):

Men: Calories = ( (Age x 0.2017) — (Weight x 0.09036) + (Heart Rate x 0.6309) — 55.0969 ) x Time / 4.184

Women: Calories = ( (Age x 0.074) — (Weight x 0.05741) + (Heart Rate x 0.4472) — 20.4022 ) x Time / 4.184

Write a program with inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), respectively. Output calories burned for men and women.

Ex: If the input is 49 155 148 60, the output is:

Men: 489.777 calories
Women: 580.94 calories
*/

#include <iostream>
using namespace std;

int main() {

   int age = 0;
   int weight = 0;
   int heartRate = 0;
   int time = 0;
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> time;
   
   cout << "Men: " << ((age * 0.2017) - (weight * 0.09036) + (heartRate * 0.6309) - 55.0969) * time / 4.184 << " calories" << endl;
   cout << "Women: " << ((age * 0.074) - (weight * 0.05741) + (heartRate * 0.4472) - 20.4022) * time / 4.184 << " calories" << endl;


   return 0;
}
