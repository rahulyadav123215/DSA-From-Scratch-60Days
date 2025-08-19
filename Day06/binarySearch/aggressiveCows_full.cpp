#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist) {
    int cows = 1, lastStallPos = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == C) {  // fixed (was 'c')
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end());

    int st = 1, en = arr[N - 1] - arr[0], ans = 1;
    while (st <= en) {
        int mid = st + (en - st) / 2;

        if (isPossible(arr, N, C, mid)) { // fixed (added mid)
            ans = mid;
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }
    return ans; // fixed (added return)
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}
