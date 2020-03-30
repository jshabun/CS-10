/*
Directions:
Given a line of text as input, output the number of characters excluding spaces, periods, or commas.

Ex: If the input is "Listen, Mr. Jones, calm down." (excluding the quotes), the output is:
21

Note: Account for all characters that aren't spaces, periods, or commas (Ex: "r", "2", "!").
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int count = 0;
   char myChar;
   
   getline(cin, userText);  // Gets entire line, including spaces. 

   for (unsigned int i = 0; i < userText.size(); ++i){
      myChar = userText[i];
      if ((myChar != ' ') && (myChar != '.') && (myChar != ',')){
         ++ count;
      }
   }
   
   cout << count << endl;

   return 0;
}
