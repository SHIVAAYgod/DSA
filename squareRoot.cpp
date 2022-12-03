/*
Given a number N, find its square root. 
You need to find and print only the 
integral part of square root of N.
For eg. if number given is 18, answer is 4.
*/
#include<iostream>
using namespace std;
 
// Returns floor of square root of x
int floorSqrt(int x)
{
    // Base cases
    if (x == 0 || x == 1)
    return x;
 
    // Starting from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}
 
// Driver program
int main()
{
    int n;
    cin >> n;
    cout << floorSqrt(n) << endl;
    return 0;
}