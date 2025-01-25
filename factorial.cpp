#include <iostream>
using namespace std;

// Recursive factorial calculation
int factorial(int product, int number, int limit) {
    if (number > limit) {
        return product; // Base case
    } else {
        return factorial(product * number, number + 1, limit); // Recursive case
    }
}

int factorial(int n) {
    return factorial(1, 1, n); // Initialize with product = 1 and starting number = 1
}

int main() {
    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    int result = factorial(n);
    cout << n << "! = " << result << endl;

    return 0;
}