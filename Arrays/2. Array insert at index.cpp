#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        int i;
        for (i = sizeOfArray - 1; i > index; i--)
            arr[i] = arr[i - 1];
        arr[i] = element;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray - 1; i++)
            cin >> arr[i];
        int index;
        cin >> index;
        int element;
        cin >> element;
        Solution obj;
        obj.insertAtIndex(arr, sizeOfArray, index, element);
        for (int i = 0; i < sizeOfArray; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
