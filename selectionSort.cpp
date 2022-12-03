#include <iostream>
using namespace std;

void selectionSort(int input[], int n)
{
	for (int i = 0; i < n; i++)
	{
		// Find the minimum element in the given array
		int min = input[i];
		int minIndex=i;
		int temp;
		for (int j = i+1; j < n; j++)
		{
			if (input[j] < min)
			{
				min = input[j];
				minIndex=j;
			}		
		}	
		// Swap the minimum elements to its right place
			temp = input[i];
			input[i] = input[minIndex];
			input[minIndex] = temp;
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		selectionSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}