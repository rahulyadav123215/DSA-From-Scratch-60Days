#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    cout << "Largest element: " << largestElement(arr, n) << endl;
    return 0;
}
