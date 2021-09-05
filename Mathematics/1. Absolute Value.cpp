#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int absolute(int I)
    {
        if (I > 0)
            return I;
        return -I;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int I;
        cin >> I;
        Solution ob;
        cout << ob.absolute(I) << endl;
    }
    return 0;
}
