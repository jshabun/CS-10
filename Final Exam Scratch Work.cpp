// Q1

if (height < 36) {
	cout << "Only rides in kidland" << endl;
} 
else if ((height >= 36) && (height <= 48)) {
	cout << "Junior thrill rides" << endl;
}
else if ((height >= 49) && (height <= 78)) {
	cout << "Thrill rides" << endl;
}
else if (height > 78) {
	cout << "Too tall for rides" << endl;
}

if ((height >= 60) && (height <= 72)) {
	cout << "Eligible to sit in the front row" << endl;
}

cout << "Have fun!" << endl;
==========================================================
/*
Write a program that reads a list of words, where the list ends with the word quit, 
and that outputs the average size of all words (excluding the ending "quit"). If the 
input is apple tree pen coffee quit, the output is 4 (5+4+3+6 is 18, divided by 4 is 4). 
Use integer division. You can assume the list has at least one word other than quit. 
*/
//Q2

string input; // variable to hold word input
int wordSum = 0; // variable to hold the number of letters in a word
int wordCount = 0; // holds the number of words inputted
int average = 0; // holds the average number

while (input != "quit") { // runs the code until the words quit is inputted
	cin >> input; // inputs the string
	wordSum = wordSum + input.size(); // adds the length of whatever words is in string to total number
	++wordCount; // adds 1 to the count of number of words
}

average = wordSum / wordCount; // calculates average

cout << average << endl; // prints out average

==========================================================
/*
Define a function FindSmallest() that has an int vector parameter and returns an int. 
If the vector parameter is 9 3 6 7 9 6, the function returns 3. You can assume the vector 
has at least one element. You should assume the vector could have a very large number of elements. 
*/
//Q3

int FindSmallest(vector<int> smallest) {
	int smallestNum; // initializes variable to hold smallest number
	smallestNum = smallest.at(0); // sets it to initially hold the value of the first vector slot. 

	for (int i = 0; i < smallest.size(); ++i) { // repeats for the length of the vector
		if (smallest.at(i) < smallestNum) { // checks whether the value of the current slot is less than whats in smallestNum
			smallestNum = smallest.at(i) // sets current slot to smallestNum if it is less than what is in smallestNum
		}
	}

	return smallestNum; // returns the smallest number. 
}




/*
Define a function HasEqualNeighbor() that has an int vector parameter and returns a bool. 
The function returns true if the vector contains two adjacent values that are equal, and false otherwise. 
For example, if the vector parameter is 3 2 5 5 4, the function returns true since the vector has at least 
one set of equal values (the 5s) next to each other. If the vector parameter is 3 4 3 8, the function returns 
false since the 3s are not next to each other. You can assume the vector has at least two elements. You should 
assume the vector could have a very large number of elements. 
*/
//Q4

bool HasEqualNeighbor (vector<int> myVector) {
	bool adjacentValues = false; // initializes adjacentValues with false

	for (int i = 0; i < myVector.size(); ++i) { // loop to repeat for size of the vector
		 if (myVector.at(i) == myVector.at(i + 1)) { // takes current i (position) and checks the value of the corresponding slot in the vector to see if it matches the one next to it. 
			adjacentValues = true; // if above is true, then adjacentValues is true;
		}
		else {
			adjacentValues = false; // if it is false, then adjacentValues is false. 
		}
	}

	return adjacentValues; // returns wether there are adjacent values or not. 
}

=========================================================

//Q5

int numXZ (vector<string> &myVector) {
   int count = 0; 

   for (unsigned int i = 0; i < myVector.size(); ++i) {
      
      if ((myVector.at(i).find('z') != string::npos) || (myVector.at(i).find('x') != string::npos)) {
        count = count + 1;
      }
      
   }

   return count;
}