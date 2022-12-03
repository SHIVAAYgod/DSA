#include <iostream>
#define ll long long
using namespace std;

int main()
{
    // your code goes here4
    int testcase;
    cin >> testcase;
    while(testcase--){
            int n;
        cin >> n;
        ll A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ll index = -1, ele = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                index = i + 1;
                ele = A[index];
                break;
            }
        }
        if (index == -1 || index == n - 1)
        {
            cout << "YES" << endl;
            continue;
        }
        ll lmx;
        for (int i = 0; i < index; i++)
        {
            if (A[i] > ele)
            {
                lmx = A[i];
                break;
            }
        }
        ll rmx = A[index - 1];
        int i;
        for (i = index + 1; i < n; i++)
        {
            if (A[i] >= rmx)
            {
                rmx = A[i];
            }
            else if (A[i] <= lmx && A[i] >= ele)
            {
                ele = A[i];
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n)
            cout << "YES" << endl;
    }

}