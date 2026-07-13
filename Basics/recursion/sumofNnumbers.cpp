#include<bits/stdc++.h>
using namespace std;
int sumofNum(int num);
int sum = 0;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int result = sumofNum(num);
    cout << result << endl;
    return 0;
}
int sumofNum(int num)
{
    if(num == 0) return 0;
    sum += num;
    sumofNum(num - 1);
    return sum;
}