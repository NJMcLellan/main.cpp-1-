// Nicholas McLellan
// Programming Using C++ COP 2334
// Replit
// This program takes input from the user for the value
// of N (the stopping point) and prints out the first
// N ordinals, followed by "Hello"

#include <iostream>

using namespace std;

int main() {
	int n; // Declare integer n

  string ending;

		for (int i = 1; i <= n; i++) { // i must be at least 1

		cout << i; // Output i

		if ((i % 10 == 1) && (i % 100 != 11)) {
			ending = "st";
		} // Remainder would end in 1, not 11, requiring st

		else if ((i % 10 == 2) && (i % 100 != 12)) {
			ending = "nd";
		} // Remainder would end in 2, not 12, requiring nd

		else if ((i % 10 == 3) && (i % 100 != 13)) {
			ending = "rd";
		} // Remainder would end in 3, not 13, requiring rd

		else {
			ending = "th";
		} // Remainder would end from 4 to 9 requiring th

		cout << ending << " Hello" << endl; // To follow i's ending
	}
}
