#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double cToF(int C)
    {
        return C * 1.8 + 32;
    }
};

int main()
{
    int T;
    int C, F;
    cin >> T;
    while (T--)
    {
        cin >> C;
        Solution ob;
        cout << floor(ob.cToF(C)) << endl;
    }
    return 0;
}
