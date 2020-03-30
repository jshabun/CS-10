/*
Directions:
Write a program that removes all spaces from the given input.

Ex: If the input is: "Hello my name is John." the output is:
HellomynameisJohn.

Your program must define and call the following function. The function should return a string representing the input string without spaces.
	string RemoveSpaces(string userString)

Note: This is a lab from a previous chapter that now requires the use of a function.
*/

#include <iostream>
using namespace std;

string RemoveSpaces(string userString) {
   string noSpaces;
   char myChar;
   
   for (unsigned int i = 0; i < userString.size(); ++i) {
      myChar = userString [i];
      
      if (!(myChar == ' ')) {
         noSpaces = noSpaces + myChar;
      }
   }
   
   return noSpaces;
}
   
int main() {
   string input;
   string output;
   
   getline (cin, input);
   
   output = RemoveSpaces (input);
   
   cout << output << endl;
   

   return 0;
}
