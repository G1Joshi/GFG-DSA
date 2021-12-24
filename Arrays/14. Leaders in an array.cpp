#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> v;
        int mx = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
            if (a[i] >= mx)
            {
                v.push_back(a[i]);
                mx = a[i];
            }
        reverse(v.begin(), v.end());
        return v;
    }
};

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> v = obj.leaders(a, n);
        for (auto it = v.begin(); it != v.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}
