// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        int r = 0, l = 0, n = s.size(), ans = -1;
        map<char, int> mp;
        while (r < n)
        {
            mp[s[r]]++;
            if (mp.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (mp.size() > k)
                {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                    {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }

        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}