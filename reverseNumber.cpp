/*
Write a program to generate the reverse of a given
number N. Print the corresponding reverse number.
( Note : If a number has trailing zeros, then its
reverse will not include them.
For e.g., reverse of 10400 will be 401
instead of 00401. )
*/
// A simple C program to reverse digits of
// an integer.
#include <iostream>
using namespace std;
 
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
/* Driver program to test reversDigits */
int main()
{
    int num = 1534236469;
    cout << "Reverse of no. is " << reversDigits(num);
    return 0;
}