#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }       
        space += 2;
        cout << endl;
    }
    space = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;

    }
}
