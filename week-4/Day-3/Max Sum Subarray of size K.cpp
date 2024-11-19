// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        int n = arr.size(), l = 0, r = 0;
        long long ans = 0, sum = 0;

        while (r < n)
        {
            sum += arr[r];
            if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= arr[l];
                l++;
            }

            r++;
        }

        return ans;
    }
};

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// input: 1
// 100 200 300 400
// 2

// Output: 700