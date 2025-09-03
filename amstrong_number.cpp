#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    int temp = num;
    while(temp) { digits++; temp /= 10; }

    temp = num;
    while(temp) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        if(isArmstrong(i)) cout << i << " ";
    }
    return 0;
}
