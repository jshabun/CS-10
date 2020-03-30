/*
Directions:
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and integer as input, and outputs a sentence using those items as below. The program repeats until the input is quit 0.

Ex: If the input is:

apples 5
shoes 2
quit 0
the output is:

Eating 5 apples a day keeps the doctor away.
Eating 2 shoes a day keeps the doctor away.

Note: This is a lab from a previous chapter that now requires the use of a loop.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   int numberItem;
   string item;
   
   cin >> item >> numberItem;
   
   while ((item != "quit") && (numberItem != '0')){
      cout << "Eating " << numberItem << " " << item << " a day keeps the doctor away.";
      cout << endl;
      cin >> item >> numberItem;
   }
      
   return 0;
}
