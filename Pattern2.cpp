// PYRAMIDAL STAR PATTERN
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int i = 1;
    while (i <= N)
    {
        int j = 1;
        int k = i;
        // for spacing
        while (k < N)
        {
            cout << " ";
            k++;
        }

        // For Pattern printing
        while (j <= 2 * i - 1)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}
