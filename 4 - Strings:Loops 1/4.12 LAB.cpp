/*
Directions:
Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string.

Ex: If the input is: n Monday, the output is:
1

Ex: If the input is: z Today is Monday, the output is:
0

Ex: If the input is: n It's a sunny day, the output is:
2

Case matters.

Ex: If the input is: n Nobody, the output is:
0

n is different than N.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   char myChar;
   string myString;
   int numChar = 0;
   unsigned x = 0;
   
   cin >> myChar;
   
   getline(cin, myString);
   
   while ( x < myString.length())
   {
     if ( myString[x] == myChar)
     {
         numChar++;
     }
     x++;
   }
   
   cout << numChar << endl;

   return 0;
}