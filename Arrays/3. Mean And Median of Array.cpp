#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int median(int A[], int N)
    {
        sort(A, A + N);
        if (N % 2)
            return A[N / 2];
        return (A[N / 2 - 1] + A[N / 2]) / 2;
    }
    int mean(int A[], int N)
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
            sum += A[i];
        return sum / N;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.mean(a, N) << " " << ob.median(a, N) << endl;
    }
    return 0;
}
