#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAdjDiff(int arr[], int n)
    {
        int md = abs(arr[0] - arr[n - 1]);
        for (int i = 0; i < n - 1; i++)
            md = min(md, abs(arr[i] - arr[i + 1]));
        return md;
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}
