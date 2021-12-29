#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxIndexDiff(int A[], int N)
    {
        int *L = new int[N];
        L[0] = A[0];
        for (int i = 1; i < N; i++)
            L[i] = min(A[i], L[i - 1]);
        int *R = new int[N];
        R[N - 1] = A[N - 1];
        for (int i = N - 2; i >= 0; i--)
            R[i] = max(A[i], R[i + 1]);
        int i = 0, j = 0, d = 0;
        while (i < N && j < N)
        {
            if (L[i] <= R[j])
            {
                d = max(d, j - i);
                j++;
            }
            else
                i++;
        }
        return d;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.maxIndexDiff(arr, num) << endl;
    }
    return 0;
}
