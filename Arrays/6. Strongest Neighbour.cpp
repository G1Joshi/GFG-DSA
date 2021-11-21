#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int sizeOfArray, int arr[])
{
    for (int i = 0; i < sizeOfArray - 1; i++)
        cout << max(arr[i], arr[i + 1]) << " ";
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for (int index = 0; index < sizeOfArray; index++)
            cin >> arr[index];
        maximumAdjacent(sizeOfArray, arr);
        cout << endl;
    }
    return 0;
}
