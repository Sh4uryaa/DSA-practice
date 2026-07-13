#include<bits/stdc++.h>
using namespace std;
void printTillNum(int num);
int cnt = 1;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    printTillNum(num);
    return 0;
}
void printTillNum(int num)
{
    if (num == 0) return;
    cout << cnt << endl;
    cnt++;
    printTillNum(num-1);
}