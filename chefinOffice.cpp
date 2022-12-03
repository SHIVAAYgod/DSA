#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int hours = x * 4;
        hours += y;
        cout << hours << endl;
    }
    return 0;
}
