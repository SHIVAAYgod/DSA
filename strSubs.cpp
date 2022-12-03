#include <bits/stdc++.h>
using namespace std;

int subs(string str, string out[])
{
    if (str.empty())
    {
        out[0] = "";
        return 1;
    }

    string smallStr = str.substr(1);
    int smallSize = subs(smallStr, out);

    for (int i = 0; i < smallSize; i++)
    {
        out[i + smallSize] = str[0] + out[i];
    }

    return 2 * smallSize;
}

int main()
{
    string str;
    cin >> str;
    string *out = new string[str.size()];
    int count = subs(str, out);
    for (int i = 0; i < count; i++)
    {
        cout << out[i] << endl;
    }

    return 0;
}