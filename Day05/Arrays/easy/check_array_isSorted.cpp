#include <bits/stdc++.h>
using namespace std;

bool check_Sorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (check_Sorted(arr))
        cout << "Array is sorted" << endl;
    else
        cout << "Array is NOT sorted" << endl;

    return 0;
}
