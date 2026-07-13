#include<bits/stdc++.h>
using namespace std;
int factorial(int num);
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int fact = factorial(num);
    cout << fact;

}
int factorial(int num)
{
    if(num == 0) return 1;
    return num * factorial(num - 1);
}