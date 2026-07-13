#include<bits/stdc++.h>
using namespace std;
void printFromNum(int num);
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    printFromNum(num);
    return 0;
}
void printFromNum(int num)
{
    if(num == 0) return;
    cout << num << endl;
    printFromNum(num-1);
}