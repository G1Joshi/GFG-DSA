#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumUnderModulo(long long a, long long b)
    {
        return (a % (int)(1e9 + 7) + b % (int)(1e9 + 7)) % (int)(1e9 + 7);
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.sumUnderModulo(a, b) << endl;
    }
    return 0;
}
