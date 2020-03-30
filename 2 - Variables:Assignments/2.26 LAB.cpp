/*
Directions:
Given a long long integer representing a 10-digit phone number, output the area code, prefix, and line number, separated by hyphens.

Ex: If the input is 8005551212, the output is:

800-555-1212
Hint: Use % to get the desired rightmost digits. Ex: The rightmost 2 digits of 572 is gotten by 572 % 100, which is 72.

Hint: Use / to shift right by the desired amount. Ex: Shifting 572 right by 2 digits is done by 572 / 100, which yields 5. (Recall integer division discards the fraction).

For simplicity, assume any part starts with a non-zero digit. So 999-011-9999 is not allowed.
*/

#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;
   int areaCode;
   int prefix;
   int lineNumber;

   cin >> phoneNumber;
   
   areaCode = (phoneNumber / 10000000);
   prefix = (phoneNumber / 10000) % 1000;
   lineNumber = (phoneNumber % 10000);
   
   cout << areaCode << "-" << prefix << "-" << lineNumber << endl;
   
   return 0;
}
