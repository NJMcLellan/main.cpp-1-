//Nicholas Mclellan
//Programming Using C++ COP 2334
//Replit
//This program takes a random number of type double and performs several 
//actions using the number and outputs the values while incrementing an
//integer counter so long as the user does not enter -1, at which point
//counter's value will be output
#include <iostream>

using namespace std;

int main() {

  int counter = 0; //Initialize counter to 0
  double num; //Initialize double num

  do {
    cout << "Enter a number: " << endl; //Ask the user to enter a number
    
    cin >> num; //Input num

    if (num == -1) {

      cout << "Invalid number" << endl;

      cin >> num;
      
  }

    else if (num != -1) {

      counter++; //Increment counter

      double numTimesNum = num * num; 
      // Declare num times num

      cout << numTimesNum << endl; 
      // Output num times num
      
      double numDivideNum = num / num; 
      // Declare num divided by num

      cout << numDivideNum << endl; 
      // Output num divided by num
      
      double numAddDivide = (num + 3.0) / 5.0; 
      // Declare num + 3.0 divided by 5.0

      cout << numAddDivide << endl; 
      // Output num + 3 divided by 5
      
      double numPlusAddDivide = ((numAddDivide) + (num + 7.0 / 2.0));
      // Declare num + 3.0 divided by 5.0, plus, num + 7.0 divided by 2.0
      
      cout << numPlusAddDivide << endl;
      // Output num + 3.0 divided by 5.0, plus, num + 7.0 divided by 2.0
    
     }
  }
  while (num != -1); {

      cout << "Counter is: " << counter << endl;

      return 0;
  }
}