#include <iostream>
using namespace std;

// structure is used to return
// two values from minMax()
struct Pair
{
    int max;
    int min;
};

struct Pair getMinMax(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;
    int mid;

    // there is only one element
    if (low == high)
    {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }

    // there are two elements
    if (high == low + 1)
    {
        if (arr[high] > arr[low])
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        else
        {
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
    }

    // there are more than 2 element we divide the array 
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    // compare the minimums of both halves
    if (mml.min < mmr.min)
    {
        minmax.min = mml.min;
    }
    else
    {
        minmax.min = mmr.min;
    }

    // compare the maximums of both halfs
    if (mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }

    return minmax;
}

// Driver code
int main()
{
    int arr[] = {1000, 11, 445,
                 1, 330, 3000};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);

    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;

    return 0;
}