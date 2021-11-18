#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityWins(int arr[], int n, int x, int y)
    {
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                a++;
            else if (arr[i] == y)
                b++;
        }
        if (a > b)
            return x;
        else if (b > a)
            return y;
        else
            return min(x, y);
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
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.majorityWins(arr, n, x, y) << endl;
    }
    return 0;
}
