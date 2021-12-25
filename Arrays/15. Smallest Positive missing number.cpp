#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1])
                swap(arr[i], arr[arr[i] - 1]);
        for (int i = 0; i < n; i++)
            if (arr[i] != i + 1)
                return i + 1;
        return n + 1;
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
        cout << ob.missingNumber(arr, n) << endl;
    }
    return 0;
}
