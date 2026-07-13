#include<bits/stdc++.h>
using namespace std;
void print(string word, int num);
int main(){
    int num;
    string word;
    cout << "Enter word: ";
    cin >> word;
    cout << "Enter amount of times to print your word: ";
    cin >> num;
    print(word, num);
}
void print(string word, int num)
{
    if(num == 0) return;
        cout << word << endl;
        print(word, --num);
}