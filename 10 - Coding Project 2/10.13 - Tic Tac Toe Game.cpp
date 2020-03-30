/*
Directions:
Implement a tic-tac-toe game.

Currently, if the variables provided in main are commented out, the program will compile. Complete the specifications for each function. As you develop the program, implement one function at a time, and test that function. The provided comments provide hints as to what each function should do and when each should be called. Add variables where you see fit.

Implementation Strategies:

	The template has variables and two global constants for you to utilize.

	The template has comments to help you develop the necessary algorithm for 2 users playing tic-tac-toe on a computer. Use these comments along with the function descriptions (comments) to help develop your program. One or more lines of your code should exist below each comment. Remove the TODO part when you have completed that step.

	DO NOT try to implement the entire game at once. Instead, develop and test one function at a time. Understand how to walk through your code by hand as well as executing it in unit tests.

	The system will test your functions as you attempt to complete each. In other words, submit as you go. Use the submission feedback and walk through your code to fix problems.

	Submit and achieve a full score on each function before implementing the main game algorithm.

Suggested order of completion:

	initVector: Define, test, and submit this function before moving on. (Should now have 2 points.)

	Now call initVector and drawBoard functions where told to in main (before getting first play) to see your first board output. Submit. (Should now have 4 points.)

	convertPosition: You'll need this to get the first play, so define, test, and submit this one before tackling getPlay function. (Should now have 6 points.)

	validPlacement: Again, you'll need this to get the first play, so define, test, and submit this one before tackling getPlay function. (Should now have 8 points.)

	getPlay: Now that you have convertPosition and validPlacement working, use these functions to help you define the getPlay function. Be sure this function continues to ask the user for input (does not return) until they provide a valid board position. Test and submit for feedback. (Should now have 10 points.)

	Now call getPlay function in main to get just 1 play. Use the return value to place an X in that spot and call drawBoard again. Do not try to get the loop working yet. Just call getPlay once. (Should now have 12 points.)

	gameWon: Define, test, and submit this function. (Should now have 16 points.)

	boardFull: Define, test, and submit this function. (Should now have 18 points.)

	You now have all functions fully tested and working. Go ahead and complete the main function. Get the loop working. Figure out how to switch who's turn it is and implement that. Output the winner or tie game after the loop exits. (Should now have full points!)

Tie Game Example:

  a  |  b  |  c  
-----|-----|-----
  d  |  e  |  f  
-----|-----|-----
  g  |  h  |  i  

Please choose a position: 
  X  |  b  |  c  
-----|-----|-----
  d  |  e  |  f  
-----|-----|-----
  g  |  h  |  i  

Please choose a position: 
  X  |  O  |  c  
-----|-----|-----
  d  |  e  |  f  
-----|-----|-----
  g  |  h  |  i  

Please choose a position: 
  X  |  O  |  c  
-----|-----|-----
  d  |  X  |  f  
-----|-----|-----
  g  |  h  |  i  

Please choose a position: 
  X  |  O  |  c  
-----|-----|-----
  d  |  X  |  f  
-----|-----|-----
  g  |  h  |  O  

Please choose a position: 
  X  |  O  |  c  
-----|-----|-----
  d  |  X  |  X  
-----|-----|-----
  g  |  h  |  O  

Please choose a position: 
  X  |  O  |  c  
-----|-----|-----
  O  |  X  |  X  
-----|-----|-----
  g  |  h  |  O  

Please choose a position: 
  X  |  O  |  X  
-----|-----|-----
  O  |  X  |  X  
-----|-----|-----
  g  |  h  |  O  

Please choose a position: 
  X  |  O  |  X  
-----|-----|-----
  O  |  X  |  X  
-----|-----|-----
  O  |  h  |  O  

Please choose a position: 
  X  |  O  |  X  
-----|-----|-----
  O  |  X  |  X  
-----|-----|-----
  O  |  X  |  O  

No one wins
*/

#include <vector>
#include <iostream>

using namespace std;


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector < char >&gameBoard) {
   for (int i = 0; i < 9; i += 3) {
      cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
         << gameBoard.at(i + 2) << "  " << endl;
      if (i < 6) {
         cout << "-----|-----|-----" << endl;
      }
   }
   cout << endl;
    
   return;
}


/// @brief Fills vector with characters starting at lower case a.
///
///     If the vector is size 2 then it will have characters a to b.
///     If the vector is size 6 then it will have characters a to f.
///     If the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v) {
   // TODO: implement function -- DONE
   for (unsigned int i = 0; i < v.size(); ++i) {
		v.at(i) = static_cast<char>(97 + i);
	}
   return;
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char boardPosition) {
   // TODO: implement function -- DONE
   if( boardPosition == 'a' ) {
        return 0;
   } 
   else if( boardPosition == 'b' ) {
        return 1;
   } 
   else if( boardPosition == 'c' ) {
        return 2;
   } 
   else if( boardPosition == 'd' ) {
        return 3;
   } 
   else if( boardPosition == 'e' ) {
        return 4;
   } 
   else if( boardPosition == 'f' ) {
        return 5;
   } 
   else if( boardPosition == 'g' ) {
        return 6;
   } 
   else if( boardPosition == 'h' ) {
        return 7;
   } 
   else if( boardPosition == 'i' ) {
        return 8;
   } 
   else {
        return -1;
   }
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {
   
   // TODO: implement function -- DONE
   if ( positionIndex != -1 ) {
        if (gameBoard.at(positionIndex) != 'X' && gameBoard.at(positionIndex) != 'O') {
            return true;
        }
    }
    return false;
   
   /*if (gameBoard.at(positionIndex) != 'X') {
		return true;
	} else if (gameBoard.at(positionIndex) != 'O') {
		return true;
	} else {
		return false;
}
*/
	/*
	if (gameBoard.at(positionIndex) != 'X' && gameBoard.at(positionIndex) != '0') {
	   return true;
	} else {
	   return false;
	}
	*/
}

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///     Continues asking for a position until a valid position has been entered.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector<char> &gameBoard) {
   
   // TODO: implement function -- DONE
   char boardPosition = ' ';
   int index = 0;
   bool check = 0;
   
   cout << "Please choose a position: " << endl;
   
   cin >> boardPosition;
   
   index = convertPosition(boardPosition);
   check = validPlacement(gameBoard, index);
   
   while (check != true) {
      cout << "Please choose a position: " << endl;
      
      cin >> boardPosition;
      
      index = convertPosition(boardPosition);
      check = validPlacement(gameBoard, index);
   }
   
   return index;
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector<char> &gameBoard) {
    
   // TODO: implement function -- DONE
   if(((gameBoard.at(0) == 'X') && (gameBoard.at(1) == 'X') && (gameBoard.at(2) == 'X')) ||
       ((gameBoard.at(0) == 'O') && (gameBoard.at(1) == 'O') && (gameBoard.at(2) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(3) == 'X') && (gameBoard.at(4) == 'X') && (gameBoard.at(5) == 'X')) ||
       ((gameBoard.at(3) == 'O') && (gameBoard.at(4) == 'O') && (gameBoard.at(5) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(6) == 'X') && (gameBoard.at(7) == 'X') && (gameBoard.at(8) == 'X')) ||
       ((gameBoard.at(6) == 'O') && (gameBoard.at(7) == 'O') && (gameBoard.at(8) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(0) == 'X') && (gameBoard.at(3) == 'X') && (gameBoard.at(6) == 'X')) ||
       ((gameBoard.at(0) == 'O') && (gameBoard.at(3) == 'O') && (gameBoard.at(6) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(1) == 'X') && (gameBoard.at(4) == 'X') && (gameBoard.at(7) == 'X')) ||
       ((gameBoard.at(1) == 'O') && (gameBoard.at(4) == 'O') && (gameBoard.at(7) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(2) == 'X') && (gameBoard.at(5) == 'X') && (gameBoard.at(8) == 'X')) ||
       ((gameBoard.at(2) == 'O') && (gameBoard.at(5) == 'O') && (gameBoard.at(8) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(0) == 'X') && (gameBoard.at(4) == 'X') && (gameBoard.at(8) == 'X')) ||
       ((gameBoard.at(0) == 'O') && (gameBoard.at(4) == 'O') && (gameBoard.at(8) == 'O'))) {
        return true;
   }
   else if(((gameBoard.at(2) == 'X') && (gameBoard.at(4) == 'X') && (gameBoard.at(6) == 'X')) ||
       ((gameBoard.at(2) == 'O') && (gameBoard.at(4) == 'O') && (gameBoard.at(6) == 'O'))) {
        return true;
   }
   else {
        return false;
   }
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) {
   
   // TODO: implement function
   for (unsigned int i = 0; i < gameBoard.size(); ++i) {
        if (gameBoard.at(i) != 'X' && gameBoard.at(i) != 'O') {
            return false;
        } 
   }
    
   return true;
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
   // Variables that you may find useful to utilize
   vector<char> gameBoard(9);
   int curPlay;
   int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'

   /// TODO: Initialize board to empty state
   initVector(gameBoard);
   /// TODO: Display the empty board
   drawBoard(gameBoard);

   /// TODO: Play until game is over
   while (!gameWon(gameBoard) && !boardFull(gameBoard)) {
      /// TODO: Get a play
      curPlay = getPlay(gameBoard);
      /// TODO: Set the play on the board
      if (whosTurn == PLAYER1) {
            gameBoard.at(curPlay) = 'X';
        } 
        else if (whosTurn == PLAYER2 ) {
            gameBoard.at(curPlay) = 'O';
        }
      /// TODO: Switch the turn to the other player
      if (whosTurn == PLAYER1) {
            whosTurn = PLAYER2;
        } 
        else if (whosTurn == PLAYER2) {
            whosTurn = PLAYER1;
        }  
      /// TODO: Output the updated board
      drawBoard(gameBoard);
   }

   /// TODO: Determine winner and output appropriate message
   if (gameWon(gameBoard) && whosTurn == PLAYER1 ) {
        cout << "Player 2 Wins!!" << endl;
   } 
   else if (gameWon(gameBoard) && whosTurn == PLAYER2 ) {
        cout << "Player 1 Wins!!" << endl;
   } 
   else {
        cout << "No one wins" << endl;
   }
    
   return 0;
}