/*
Directions:
Many documents use a specific format for a person's name. Write a program whose input is: firstName middleName lastName, and whose output is: lastName, firstName middleInitial.

Ex: If the input is Pat Silly Doe, the output is:

Doe, Pat S.
If the input has the form firstName lastName, the output is lastName, firstName.

Ex: If the input is: Julia Clark, the output is:

Clark, Julia
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName;
   string middleName;
   string lastName;
   string name;
   
   getline (cin, name);
   
   int found1 = name.find(" ");
   int found2 = name.find(" ", found1 + 1);
   
   firstName = name.substr(0, found1);  
   
   if (found2 != string::npos){
      middleName = name.substr(found1 + 1, found2 - found1 - 1);
      lastName = name.substr(found2 + 1, name.length() - found2 - 1);
      cout << lastName << ", " << firstName << " " << middleName[0] << "." << endl;
   }
   else{
      lastName = name.substr( found1 + 1, name.length() - found1 - 1);
      cout << lastName << ", " << firstName << endl;
   }
   

   return 0;
}