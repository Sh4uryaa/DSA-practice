#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int original= num;
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    if (original == reverse) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}