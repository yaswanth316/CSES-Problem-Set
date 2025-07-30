#include <bits/stdc++.h>
using namespace std;

int main() {
        int a = 355, b = 54, c = 103;
    int n = 1, remA, remB, remC;

    while (true) {
        remA = a % n;
        remB = b % n;
        remC = c % n;
        
        if (remA == remB && remB == remC) {
            if(__gcd(remA,__gcd(remB,remC))  != 1){
                cout<<"is one "<<endl;
            }

            cout << "The greatest number that leaves the same remainder: " << n << endl;
        }

        n++;
        if (n > min({a, b, c})) break; // Stop when n exceeds the smallest number
    }

    return 0;
}
