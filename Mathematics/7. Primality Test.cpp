#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int N)
    {
        for (int i = 2; i <= sqrt(N); i++)
            if (N % i == 0)
                return false;
        return true;
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
        if (ob.isPrime(N))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}
