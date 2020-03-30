/*
Directions:
Write a program that takes in a line of text as input, and outputs that line of text in reverse. The program repeats, ending when the user enters "Quit", "quit", or "q" for the line of text.

Ex: If the input is:

Hello there
Hey
quit

then the output is:

ereht olleH
yeH
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   string input;
   string result;
   
   getline (cin, input);
   
   while ((input != "Quit") && (input != "quit") && (input != "q")){
      result = "";
      for (int i = input.length()-1; i >= 0; --i){
         result += input[i];
      }
      cout << result << endl;
      getline (cin, input);
   }
   
   
         

   return 0;
}
