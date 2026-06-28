#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if (sum == original) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}