#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;    // Number of digits
    int div = 11; // Divisor

    // Smallest 5-digit number
    int dividend = 10000; 

    // Compute remainder when divided by 11
    int rem = dividend % div;

    // Find the next number that is exactly divisible by 11
    int smallestDivisible = (rem == 0) ? dividend : (dividend + (div - rem));

    cout << "The smallest 5-digit number exactly divisible by 11 is: " << smallestDivisible << endl;

    return 0;
}
