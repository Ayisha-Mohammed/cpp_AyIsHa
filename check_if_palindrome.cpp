#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cin >> n;
    original = n;

    while(n > 0) {
        rev = rev*10 + n%10;  // build reversed number
        n = n/10;             // remove last digit
    }

    if(rev == original)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}
