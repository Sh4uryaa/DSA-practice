#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 1){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}