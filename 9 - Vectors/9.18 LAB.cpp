/*
Directions:
Write a program that reads a list of integers, and outputs whether the list contains all even numbers, odd numbers, or neither. The input begins with an integer indicating the number of integers that follow.

Ex: If the input is 5 2 4 6 8 10, the output is:
all even

Ex: If the input is 5 1 3 5 7 9, the output is:
all odd

Ex: If the input is 5 1 2 3 4 5, the output is:
not even or odd

Your program must define and call the following two functions. IsVectorEven returns true if all integers in the array are even and false otherwise. IsVectorOdd returns true if all integers in the array are odd and false otherwise.
	bool IsVectorEven(vector<int> myVec)
	bool IsVectorOdd(vector<int> myVec)
*/

#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven (const vector<int> &myVec) {
   bool value = true;
   
	for (unsigned int i = 0; i < myVec.size(); ++i) {
		if (myVec.at(i) % 2 == 1) {
		   value = false;
		}
	}
	return value;
}

bool IsVectorOdd (const vector<int> &myVec) {
	bool value = true;
	
	for (unsigned int i = 0; i < myVec.size(); ++i) {
		if (myVec.at(i) % 2 == 0) {
			value = false;
		}
	}
	return value;
}

int main() {
  int numOfInts = 0;
  int num;
  
  vector<int> myVec;
  
  cin >> numOfInts;
  
  for (int i = 0; i < numOfInts; ++i) {
     cin >> num;
     myVec.push_back(num);
  }
  
  if (IsVectorEven(myVec)) {
  	cout << "all even" << endl;
  }
  else if (IsVectorOdd(myVec)) {
  	cout << "all odd" << endl;
  }
  else {
  	cout << "not even or odd" << endl;
  }
  
   return 0;
}
