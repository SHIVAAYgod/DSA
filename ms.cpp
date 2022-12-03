#include <iostream>
#include<algorithm>
#include<map>   
#include<vector>
using namespace std;
#define ll long long
int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> mp;
    vector<string> v;
    v.push_back("");
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if(mp[s[i]] == 1)
        {
            v[count].push_back(s[i]);
        }
        else
        {
            mp.clear();
            v.push_back("");
            mp[s[i]]++;
            v[count].push_back(s[i]);
            count++;
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}