#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rearrange(long long *arr, int n)
    {
        if (n == 1)
            return;
        vector<long long> v;
        for (int j = n - 1, i = 0; i <= j;)
        {
            v.push_back(arr[j--]);
            v.push_back(arr[i++]);
        }
        for (int i = 0; i < n; i++)
            arr[i] = v[i];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        ob.rearrange(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
