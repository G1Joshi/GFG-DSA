#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long factorial(int N)
    {
        long long F = 1;
        for (int i = N; i > 1; i--)
            F *= i;
        return F;
    }
};

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}
