#include<iostream>
using namespace std;

// Pair struct is used to return
// two values from getMinMax()
struct Pair
{
    int max;
    int min;
};

Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    //the array has only one element 
    if(n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    // the array has more than one element
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    
    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
        minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
        minmax.min = arr[i];
        }
    
    }
    
    return minmax;
}

    // Driver code
int main()
{
     int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
     
    struct Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}