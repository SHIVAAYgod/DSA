#include <iostream>
using namespace std;
#define ll long long
//help taken
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        if (a % b == 0)
        {
            cout << -1 << endl;
            continue;
        }

        ll x = n;
        if (x % a != 0)
        {
            x = n + a - (x % a);
        }
        while (!(x % a == 0 && x % b != 0))
        {
            x = x + a;
        }
        cout << x << endl;
    }
    return 0;
}