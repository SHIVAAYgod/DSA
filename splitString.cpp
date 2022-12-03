#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, c1 = 0, c2 = 0;
		cin >> n >> k;
		char s[n];
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1')
				c1++;
			else
				c2++;
		}
		int mn = min(c1, c2);
		c1 -= mn;
		c2 -= mn;
		int x = max(c1, c2);
		int group = 0;
		if (x > 0)
		{
			group = (x / k);
			group += (x % k > 0);
		}
		cout << group << endl;
	}
	return 0;
}