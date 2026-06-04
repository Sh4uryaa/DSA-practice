#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks < 25 && marks >= 0)
    {
        cout << "F grade.";
    }
    else if (marks <= 44)
    {
        cout << "E grade.";
    }
    else if (marks <=49)
    {
        cout << "D grade.";
    }
    else if (marks <= 59)
    {
        cout << "C grade.";
    }
    else if (marks <= 79)
    {
        cout << "B grade!";
    }
    else if (marks <= 100)
    {
        cout << "A grade!";
    }
    else
    {
        cout << "Invalid input.";
    }
}