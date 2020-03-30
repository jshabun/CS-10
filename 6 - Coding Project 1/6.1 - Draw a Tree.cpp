/*
Directions:

#include <iostream>
using namespace std;

int main() {

    // Draw leaves
    cout << "  *"   << endl;
    cout << " ***"  << endl;
    cout << "*****" << endl;

    // Draw trunk
    cout << " ***" << endl;
    cout << " ***" << endl;
    cout << " ***" << endl;
    cout << " ***" << endl;

    return 0;
}
(1) Modify the above program to ask the user to specify a number of tree trunk levels (“Enter trunk height: “), then use a loop to draw that many levels.

Testing suggestion: If the user specifies 4 tree trunk levels, then the original tree should be drawn.



(2) Modify the program again to ask the user to specify a number of tree trunk *’s per level ("Enter trunk width: “), then use a loop to draw that many *’s per level.

You’ll need to use a nested loop in which the inner loop draws the *’s, and the outer loop iterates a number of times equal to the number of tree trunk levels.



(3) Modify the program so that it only accepts odd numbers for the trunk width. Use a loop to continue prompting the user for a width until the number is odd.

while ((width % 2) == 0) {
    cout << "Please enter an odd number for the width: ";
    cin >> width;
    cout << endl;
}


(4) Modify the program to ask the user to specify a number of tree leaves levels (“Enter leaves width: “), then use a nested loop to draw that many levels.

You’ll need two inner loops for drawing the leaves: one for outputting spaces and one for outputting *’s. The outer loop iterates a number of times equal to the number of tree leaves levels.

The top level of the leaves must have at least one *.

You will have to modify this as well to only accept odd numbers for the number of leaves.

Here is an example program execution. The user typed inputs have asterisks around them to clearly denote them as user inputs.

Enter trunk height: *10*
Enter trunk width: *5*
Enter leaves width: *11*

     *
    ***
   *****
  *******
 *********
***********
   *****
   *****
   *****
   *****
   *****
   *****
   *****
   *****
   *****
   *****
Here is an example program execution when the user attempts to enter an even number for trunk width. A similar pattern should be followed, when a user attempts to enter an even number for leaves width as well. The user typed inputs have asterisks around them to clearly denote them as user inputs.

Enter trunk height: *3*
Enter trunk width: *4*
Please enter an odd number for the width: *2*
Please enter an odd number for the width: *6*
Please enter an odd number for the width: *3*
Enter leaves width: *7*

   *
  ***
 *****
*******
  ***
  ***
  ***

*/

#include <iostream>
using namespace std;

int main() {
   
   int trunkHeight = 0;
   int trunkWidth = 0;
   int leafWidth = 0;
      
   cout << "Enter trunk height: " << endl;
   cin >> trunkHeight;
   cout << "Enter trunk width: " << endl;
   
   while (!(cin >> trunkWidth) || (trunkWidth % 2 == 0)) {
      cout << "Please enter an odd number for the width: " << endl;
      }
   
   cout << "Enter leaves width: " << endl;
   cin >> leafWidth;
   cout << endl;
   
   for (int z = 0; z < leafWidth; /*++z*/ z+= 2) {
      
      //int j = 0;
      
      for (int j = 0; j < leafWidth/2 - (z) / 2; ++j) {
         cout << ' ';
      }

      for (int k = 0; k <= z; ++k) {
         cout << '*';
         //++j;
         }
         
         cout << endl;
   }

   double calc = ((2 * leafWidth) - (trunkWidth * 2 / 2)) / 2;
   
   for (int i = 0; i < trunkHeight; ++i) {
      
      for (int j = 0; j < (calc/2) - 1; ++j) {
         cout << ' ';
      }
      
      
      for (int q = 0; q < trunkWidth; ++q) {
      cout << '*';
      }
      
      cout << endl;
      
   }

   return 0;

}
