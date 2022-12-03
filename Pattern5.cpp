// CHARACTER PATTERN
#include <iostream>
using namespace std;

/*
A
BB
CCC
DDDD
EEEEE
*/
int p1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char p = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << p;
        }

        cout << endl;
    }

    return 0;
}

/*
A
BC
CDE
DEFG
EFGHI
*/
int p2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char p = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            char q = p + j - 1;
            cout << q;
        }

        cout << endl;
    }

    return 0;
}

/*
E
DE
CDE
BCDE
ABCDE
*/
int p3(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            char p = 'A' + j - 1;
            cout << p;
        }

        cout << endl;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter  the number of rows: " << endl;
    cin >> n;
    p1(n);
    cout << endl;
    p2(n);
    cout << endl;
    p3(n);
    cout << endl;
    // p4(n);
    // cout << endl;
    // p5(n);
    // cout << endl;
    // p6(n);
    // cout << endl;
    return 0;
}