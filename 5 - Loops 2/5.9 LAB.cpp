/*
Directions:
Write a program that removes all spaces from the given input.

Ex: If the input is "Hello my name is John." (excluding the quotes), the output is:

HellomynameisJohn.
*/

#include <iostream>
using namespace std;

int main() {
   
   string userInput;
   string result;
   
   getline (cin, userInput);
   
   for (unsigned int i = 0; i < userInput.length(); ++i){
      if (userInput[i] != ' '){
         result += userInput[i];
      }
   }
   
   cout << result << endl;
   
   return 0;
}