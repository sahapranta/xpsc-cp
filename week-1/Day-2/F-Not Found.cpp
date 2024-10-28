#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int count = s.size();
    int arr[26];
    memset(arr, -1, sizeof(arr));

    for (char c : s)
    {
        arr[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == -1)
        {
            char b = 'a' + i;
            cout << b << endl;
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}