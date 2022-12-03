// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
//  Note:
// Change in the input array/list itself. You don't need to return or print the elements.
//  Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the elements of the array/list in sorted order separated by a single space.

// Output for every test case will be printed in a separate line.
#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = input[i];
        int j;
        for ( j = i - 1; j >= 0; j--)
        {
            if (input[j] > current)
            {
                input[j + 1] = input[j];
            }
            else
            {
                break;
            }
        }
        input[j + 1] = current;
    }
}

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

        insertionSort(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}