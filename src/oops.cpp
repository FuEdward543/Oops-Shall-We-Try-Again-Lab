#include <string>
#include <iostream>
using namespace std;

int oops(const int lowerBound, const int upperBound, const string &promptInput, const string &invalidInput) {
   int inputInt;
   cout << promptInput << endl;
   cin >> inputInt;

   while(inputInt < lowerBound||inputInt > upperBound) {
      int InputIntLoop;
      cout << invalidInput << endl << promptInput;
      cin >> InputIntLoop;

      inputInt = InputIntLoop;
   }
   cout << "The value chosen by the user is " << inputInt << endl;

   return inputInt;
}
