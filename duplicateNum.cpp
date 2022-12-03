/*
You have been given an integer array/list(ARR)
of size N which contains numbers from 0 to (N - 2).
Each number is present at least once. That is,
if N = 5, the array/list constitutes values ranging
from 0 to 3 and among these, there is a single
integer value that is present twice. You need to
find and return that duplicate number present in
the array.
Note :
Duplicate number is always present in the given
array/list.

Input format :
The first line contains an Integer 't' which
denotes the number of test cases or queries to be
run. Then the test cases follow.

First line of each test case or query contains an
integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated
integers representing the elements in the array/list.

Output Format :
For each test case, print the duplicate element in
the array/list.

Output for every test case will be printed in a
separate line.
*/
#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
}
// int duplicateNumber(int *arr, int size)
// {
//     // The variable duplicate stores the duplicate element in the array
//     int duplicate;

//     for (int currentNumber = 1; currentNumber <= size - 1; currentNumber++)
//     {
//         // The variable count stores the number of currentNumber in the array ARR
//         int count = 0;

//         // Traverse through the array ARR
//         for (int i = 0; i < size; i++)
//         {
//             // Check if ARR[index] is equal to currentNumber
//             if (arr[i] == currentNumber)
//             {
//                 count++;
//             }
//         }

//         // Check if count is more than 1
//         if (count > 1)
//         {
//             duplicate = currentNumber;
//         }
//     }

//     // Return the variable duplicate
//     return duplicate;
// }

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << duplicateNumber(input, size) << endl;
    }

    return 0;
}