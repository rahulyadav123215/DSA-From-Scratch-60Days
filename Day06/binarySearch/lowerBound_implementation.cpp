#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            // look for smaller index on left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look for right
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int x = 5;

    int result = lowerBound(arr, arr.size(), x);

    if (result == arr.size())  
        cout << -1 << endl; // not found
    else
        cout << result << endl; // index of lower bound
    
    return 0;
}


// Step 1 – Binary search trace
// low=0, high=7
// mid = 3 → arr[3] = 7 ≥ 5 → ans = 3, move left → high = 2

// low=0, high=2
// mid = 1 → arr[1] = 4 < 5 → move right → low = 2

// low=2, high=2
// mid = 2 → arr[2] = 6 ≥ 5 → ans = 2, move left → high = 1

// low=2, high=1 → loop ends.

// Step 2 – Result
// ans = 2 (index of the first element ≥ 5).
// arr[2] = 6.