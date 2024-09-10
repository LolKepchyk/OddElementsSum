#include <iostream>

using namespace std;

int main() {
   const int SIZE = 10;
   int mas[SIZE];
   int sum = 0;

   // Input values into the array
   for (int i = 0; i < SIZE; ++i) {
	  cout << "Enter mas: [" << i << "] => _\b";
	  cin >> mas[i];
   }

   // Calculate the sum of odd elements
   for (int i = 0; i < SIZE; ++i) {
	  if (mas[i] % 2 != 0) { // Check if the element is odd
		 sum += mas[i]; // Add the odd element to the sum
	  }
   }

   // Output the result
   cout << "sum = " << sum << endl; // Print the sum of odd elements

   return 0;
}
