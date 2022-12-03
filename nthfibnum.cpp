#include <iostream>
using namespace std;

// displays the Nth fibonacci number 
int nthfibnum(int N)
{
    if (N <= 2)
        return 1;
    return nthfibnum(N-1) + nthfibnum(N-2);
}

// Driver Code
int main()
{
    int n;
        cout << "ENTER A REAL NUMBER" << endl;
            cin >> n;
    nthfibnum(n);
        cout << "The equivalent Fibonacci number is:  " << nthfibnum(n) << endl;
    return 0;
}