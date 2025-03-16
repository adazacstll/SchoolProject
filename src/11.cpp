
// This program calculates the sum of two numbers using recursion.

#include <iostream>

using namespace std;

int sum(int n1, int n2) {
    if (n2 == 0) {
        return n1;
    } else {
        return n1 + sum(n1, n2 - 1);
    }
}

int main() {
    cout << "Enter two numbers: ";
    int n1, n2;
    cin >> n1 >> n2;
    cout << "Sum of the two numbers is: " << sum(n1, n2) << endl;
    return 0;
}