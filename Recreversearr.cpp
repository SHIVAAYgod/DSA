// Recursive way to reverse an array
#include <iostream>
using namespace std;
void Recreversearray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // recursive function call
    Recreversearray(arr, start + 1, end - 1);
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    // To print original array
    printarray(arr, n);

    // Function calling
    Recreversearray(arr, 0, n - 1);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printarray(arr, n);

    return 0;
}