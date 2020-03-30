/*
Directions:
Write a program that takes an integer as input, representing a year in school. Output "Elementary school" for 0-5, 
"Middle school" for 6-8, "High school" for 9-12, "College" for 13-16, and "Post-secondary" for 17 and higher. Output 
"Invalid" for negative input. If the input is 7, the output is:

Middle school
*/

#include <iostream>
using namespace std;

int main() {

   int schoolYear;
   
   cin >> schoolYear;
   
   if (schoolYear < 0){
      cout << "Invalid" << endl;
   }
   else if ((schoolYear >= 0) && (schoolYear <= 5)){
      cout << "Elementary school" << endl;
   }
   else if ((schoolYear >= 6) && (schoolYear <= 8)){
      cout << "Middle school" << endl;
   }
   else if ((schoolYear >= 9) && (schoolYear <= 12)){
      cout << "High school" << endl;
   }
   else if ((schoolYear >= 13) && (schoolYear <= 16)){
      cout << "College" << endl;
   }
   else if ((schoolYear >= 17)){
      cout << "Post-secondary" << endl;
   }

   return 0;
}
