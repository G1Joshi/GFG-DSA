#include <iostream>
using namespace std;

class Solution
{
public:
    int equilibriumPoint(long long a[], int n)
    {
        long long leftSum = 0, rightSum = 0;
        for (int i = 0; i < n; i++)
            rightSum += a[i];
        for (int i = 0; i < n; i++)
        {
            rightSum -= a[i];
            if (leftSum == rightSum)
                return i + 1;
            leftSum += a[i];
        }
        return -1;
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
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
