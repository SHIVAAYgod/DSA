#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        unordered_map<int, int> m;
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];

            m[vec[i]]++;
        }
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (m[vec[i]] != 0)
                arr.push_back(m[vec[i]]);
            m[vec[i]] = 1;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        if (arr.size() == 1)
        {
            cout << max(n / 2, n - n / 2);
        }
        else
        {
            int a = max(arr[0] / 2, arr[0] - arr[0] / 2);
            cout << max(a, arr[1]) << endl;
        }
    }
    return 0;
}