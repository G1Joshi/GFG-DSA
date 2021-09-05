#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> quadraticRoots(int a, int b, int c)
    {
        vector<int> v;
        double d = b * b - 4 * a * c;
        if (d < 0)
        {
            v.push_back(-1);
            return v;
        }
        double r1 = floor((-b + sqrt(d)) / (double)(2 * a));
        double r2 = floor((-b - sqrt(d)) / (double)(2 * a));
        v.push_back(max(r1, r2));
        v.push_back(min(r1, r2));
        return v;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++)
                cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
