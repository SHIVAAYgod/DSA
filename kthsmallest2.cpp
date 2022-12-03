/*Given an array and a number k where k is smaller than the size of the array,
we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.*/
#include <iostream>

using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    // sort the given array
    sort(arr, arr + n);

    // find the kth smallest element in sorted array
    return arr[k - 1];
}

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]), k = 3;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}