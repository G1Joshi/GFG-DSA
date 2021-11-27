#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotateArr(int arr[], int d, int n)
    {
        int i = 0;
        for (int j = d - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        i = d;
        for (int j = n - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        i = 0;
        for (int j = n - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        ob.rotateArr(arr, d, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
