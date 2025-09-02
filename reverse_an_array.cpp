#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;             // size of array
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];    // input array

    // reverse array
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    // print reversed array
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
