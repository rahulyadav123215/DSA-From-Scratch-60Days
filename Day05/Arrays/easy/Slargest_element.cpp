
#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;  // -1 if no second largest
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);
    if (result == -1)
        cout << "No second largest element found." << endl;
    else
        cout << "Second largest element is: " << result << endl;

    return 0;
}
