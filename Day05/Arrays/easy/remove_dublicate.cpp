#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int index = 1; // Start from second element

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[index - 1])
        {
            arr[index] = arr[i];
            index++;
        }
    }

    return index; // New size of array without duplicates
}

int main()
{
    int n;
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";
    cout << "\nNew size: " << newSize << endl;

    return 0;
}
