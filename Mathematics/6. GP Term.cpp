#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double termOfGP(int A, int B, int N)
    {
        return A * pow((double)B / A, N - 1);
    }
};

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        int N;
        cin >> N;
        Solution ob;
        cout << floor(ob.termOfGP(A, B, N)) << endl;
    }
    return 0;
}
