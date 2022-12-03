/*
Given an array of length N, you need to find and
print the sum of all elements of the array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array,
separated by spaces
*/
#include <iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

void arrayPrint(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int arrayInput(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }

    return 0;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    arrayInput(arr, size);
    cout << "The array is: " << endl;
    arrayPrint(arr, size);
    cout << "The sum of all the elements of the array is: " << arraySum(arr, size) << endl;
    return 0;
}