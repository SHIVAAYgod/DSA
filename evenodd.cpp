#include <iostream>
using namespace std;
void evenoddcheck(int arr[0], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " even ";
        }
        else
        {
            cout << arr[i] << " odd ";
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
        cout << endl;
    }
}

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element in array" << endl;
        cin >> arr[i];
    }

    // To print original array
    printarray(arr, n);

    evenoddcheck(arr, n);

    return 0;
}