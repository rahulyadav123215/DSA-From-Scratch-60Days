#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive step
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}
