// Algorithm Challenge
// 32 Program to calculate num raised to the power of exp (exponent)

#include <iostream>
using namespace std;

int main()
{
    int num, exp;

    // Ask user to enter the base number
    cout << "Enter the base number: ";
    cin >> num;

    // Ask user to enter the exponent
    cout << "Enter the exponent: ";
    cin >> exp;

    int result = 1; // Start with 1 because anything power 0 equals 1

    // If exponent is 0, the result should be 1
    if (exp == 0)
    {
        cout << "Result: " << result;
        return 0;
    }

    // Loop to multiply base number exp times
    for (int i = 0; i < exp; i++)
    {
        result *= num; // Multiply result by num each iteration
    }

    // Display final result
    cout << "The result of " << num << " raised to the power of "
         << exp << " is: " << result << endl;

    return 0;
}
