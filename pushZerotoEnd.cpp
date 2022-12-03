// You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
// Note:
// Change in the input array/list itself. You don't need to return or print the elements.

// You need to do this in one scan of array only. Don't use extra space.

// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the elements of the array/list in the desired order separated by a single space.

// Output for every test case will be printed in a separate line.
#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int count = {0};  // Count of non-zero elements
 
    // Traverse the array. If element encountered is non-
    // zero, then replace the element at index 'count'
    // with this element
    for (int i = 0; i < size; i++)
        if (input[i] != 0)
            input[count++] = input[i]; // here count is
                                   // incremented
 
    // Now all non-zero elements have been shifted to
    // front and  'count' is set as index of first 0.
    // Make all elements 0 from count to end.
    while (count < size)
        input[count++] = 0;
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}