#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
    cout << num << endl;
}