/*
You have been given an integer array/list(ARR) and 
a number X. Find and return the total number of 
pairs in the array/list which sum to X.
Note:
Given array/list can contain duplicate elements. 
Input format :
The first line contains an Integer 't' which denotes
the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an
integer 'N' representing the size of the first 
array/list.

Second line contains 'N' single space separated 
integers representing the elements in the array/list.

Third line contains an integer 'X
*/
#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
    int count = 0;
    // Fix the first element as A[i]
    for (int i = 0; i < size - 2; i++)
    {

        // Fix the second element as A[j]
        for (int j = i + 1; j < size - 1; j++)
        {
            if (input[i] + input[j] == x)
            {
                count++;
                cout << "Triplet is " << input[i] << ", " << input[j];
                cout << endl;
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }
        cin >> x;

        cout << pairSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}