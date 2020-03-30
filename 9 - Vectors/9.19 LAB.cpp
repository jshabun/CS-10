/*
Directions:
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow.

Ex: If the input is 5 hey hi Mark hi mark, the output is:

hey 1
hi 2
Mark 1
hi 2
mark 1

Hint: Use two vectors, one for the strings, another for the frequencies.

Your program must define and use the following function:
	int GetFrequencyOfWord(vector<string> wordsList, string currWord)

Note: This is a lab from a previous chapter that now requires the use of a function.
*/

#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int GetFrequencyOfWord (vector<string> wordsList, string currWord) {
   int count = 0;
   
   for (unsigned int i = 0; i < wordsList.size(); ++i) {
      if (wordsList.at(i).compare(currWord) == 0) {
         ++count;
      }
   }
   
   return count;
}

int main() {
   vector<string> wordsList;
   vector<int> frequency;
   int numWords;
   string wordInput;
   int count;

   cin >> numWords;

   for (int i = 0; i < numWords; ++i) {
      cin >> wordInput;
      wordsList.push_back(wordInput);
   }
   
   for (int i = 0; i < numWords; ++i) {
      count = GetFrequencyOfWord(wordsList, wordsList.at(i));
      frequency.push_back(count);
   }
   
   for (int i = 0; i < numWords; ++i) {
      cout << wordsList.at(i) << " " << frequency.at(i) << endl;
   }

   return 0;
}
