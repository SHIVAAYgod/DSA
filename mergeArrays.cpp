// Given two sorted arrays of Size M and N respectively, merge them into a third array such that the third array is also sorted.
// Input Format :
//  Line 1 : Size of first array i.e. M
//  Line 2 : M elements of first array separated by space
//  Line 3 : Size of second array i.e. N
//  Line 2 : N elements of second array separated by space
// Output Format :
// M + N integers i.e. elements of third sorted array separated by spaces.
#include <iostream>
using namespace std;

// void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
// {
//     int i = 0, j = 0, k = 0;
//     int l = size1 + size2;
//     while (k < l)
//     {
//         if (arr1[i] <= arr2[j] && i < size1)
//         {
//             ans[k] = arr1[i];
//             k++;
//             i++;
//             if (i == size1)
//             {
//                 for (int p = j; p < size2; p++)
//                 {
//                     ans[k] = arr2[p];
//                     k++;
//                 }
//             }
//         }
//         else if (arr1[i] > arr2[j] && j < size2)
//         {
//             ans[k] = arr2[j];

//             k++;
//             j++;
//             if (j == size2)
//             {
//                 for (int p = i; p < size1; p++)
//                 {
//                     ans[k] = arr1[p];
//                     k++;
//                 }
//             }
//         }
//     }
// }

void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
    int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<size1 && j <size2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            ans[k++] = arr1[i++];
        else
            ans[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < size1)
        ans[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < size2)
        ans[k++] = arr2[j++];
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int *arr1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int *arr2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int *ans = new int[size1 + size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
	}
}
