// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
// Note:
// You need to change in the given array/list itself. Hence, no need to return or print anything. 
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers(all 0s and 1s) representing the elements in the array/list.
// Output format :
// For each test case, print the sorted array/list elements in a row separated by a single space.

// Output for every test case will be printed in a separate line.
#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    // Variables to maintain the count of 0's and 1's
    // in the array
    int count0 = 0, count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
            count0++;
        if (input[i] == 1)
            count1++;
    }

    // Putting the 0's in the array in starting.
    for (int i = 0; i < count0; i++)
        input[i] = 0;

    // Putting the 1's in the array after the 0's.
    for (int i = count0; i < (count0 + count1); i++)
        input[i] = 1;


    return;
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}