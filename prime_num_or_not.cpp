#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;  // 0 and 1 are not prime
    } else {
        for (int i = 2; i * i <= n; i++) { // check up to √n
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
