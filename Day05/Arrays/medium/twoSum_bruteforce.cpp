#include <bits/stdc++.h>
using namespace std;

void twoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "No pair found." << endl;
}

int main() {
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;
    int n = sizeof(arr) / sizeof(arr[0]);

    twoSum(arr, n, target);

    return 0;
}
