/*
Directions:
Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs yes if every character is a digit 0-9.

Ex: If the input is 1995, the output is:
yes

Ex: If the input is 42,000 or 1995!, the output is:
no

Hint: Use a loop and the isdigit() function (don't forget to include the cctype library).
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
  
  cin >> userString;
   
   bool number = true;; 
    
    for(unsigned int i=0;i<userString.size();i++){ 
        if( !isdigit (userString[i]) ){  
            number = false;
        }  
    }
   
    if( number == true){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

   return 0;
}
