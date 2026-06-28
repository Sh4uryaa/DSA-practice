#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}