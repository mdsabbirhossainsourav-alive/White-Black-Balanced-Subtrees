#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        map<int,int> mp;
        map<int,int> x;
        for(int i=2; i<=n; i++)
        {
            cin >> mp[i];
        }
        string s;
        cin >> s;
        for(int i=1; i<=n; i++) 
        {
            if(s[i-1] == 'B')
            {
                x[i] = 1;
            } 
            else
            {
                x[i] = -1;
            }
        }
        int ans = 0;
        for(int i=n; i>=1; i--) 
        {
            if(x[i] == 0)
            {
                ans++;
            }
            if(i > 1)
            {
                x[mp[i]] += x[i];
            } 
        }
        cout << ans << endl;
    }
    return 0;
}