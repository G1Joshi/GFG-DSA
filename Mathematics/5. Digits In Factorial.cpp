#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int digitsInFactorial(int N)
    {
        double C = 0;
        for (int i = 1; i <= N; i++)
        {
            C += log10(i);
        }
        return floor(C + 1);
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
        Solution ob;
        cout << ob.digitsInFactorial(N) << endl;
    }
    return 0;
}
