// https://codeforces.com/problemset/problem/1722/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        bool found = true;
        for (int i = 0; i < n; i++) {            
            if (a[i] == 'G') a[i] = 'B';
            if (b[i] == 'G') b[i] = 'B';
            
            if (a[i] != b[i]) {
                found = false;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
