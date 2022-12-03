/*
Write a program to print first x terms of the series
3N + 2 which are not multiples of 4.
*/
#include <iostream>
using namespace std;

int termsOfAp(int n)
{
       int count = 0;
    for (int i = 1; count < n; i++)
    {
        int ap = 3 * i + 2;
         if (ap % 4 != 0)
        {
                cout << ap << " ";
                    count++;
        }
    }
    cout << endl;
     return 0;
}
int main()
{
    int n;
    cin >> n;
    termsOfAp(n);
    return 0;
}
