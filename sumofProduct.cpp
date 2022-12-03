#include <iostream>
using namespace std;
#define ll long long
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0, count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                count++;
            else
            {
                ans += (count * (count + 1) / 2);
                count = 0;
            }
        }
        ans += (count * (count + 1) / 2);
        cout << ans << endl;
    }
    return 0;
}