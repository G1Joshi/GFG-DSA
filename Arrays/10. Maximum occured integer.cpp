#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxOccurred(int L[], int R[], int n, int maxx)
    {
        int arr[maxx] = {};
        for (int i = 0; i < n; i++)
        {
            arr[L[i]]++;
            arr[R[i] + 1]--;
        }
        int mx = arr[0], count = 0;
        for (int i = 1; i < maxx; i++)
        {
            arr[i] += arr[i - 1];
            if (arr[i] > mx)
            {
                mx = arr[i];
                count = i;
            }
        }
        return count;
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
        int L[n];
        int R[n];
        for (int i = 0; i < n; i++)
            cin >> L[i];
        int maxx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> R[i];
            if (R[i] > maxx)
                maxx = R[i];
        }
        Solution ob;
        cout << ob.maxOccurred(L, R, n, maxx) << endl;
    }
    return 0;
}
