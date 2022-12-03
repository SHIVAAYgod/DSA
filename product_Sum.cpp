/*
Write a program that asks the user for a number N
and a choice C. And then give them the possibility
to choose between computing the sum and computing
the product of all integers in the range 1 to N
(both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1'
 (without the quotes)
*/
#include <iostream>
using namespace std;

int printProduct(int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }

    return product;
}

int printSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}
int choice(int n, int c)
{
    if (c == 1)
    {
        printSum(n);
        cout << printSum(n) << endl;
    }
    else if (c == 2)
    {
        printProduct(n);
        cout << printProduct(n) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
int main()
{
    int n, c;
    cin >> n >> c;

    choice(n, c);
    cout << endl;
    return 0;
}