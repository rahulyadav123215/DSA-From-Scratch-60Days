#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly) {
    int totalH = 0;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        // ceiling of v[i] / hourly
        totalH += (v[i] + hourly - 1) / hourly;
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> &v, int h) {
    int low = 1, high = findMax(v);
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(v, mid);

        if (totalH <= h) {
            high = mid - 1; // try smaller rate
        } else {
            low = mid + 1;  // need higher rate
        }
    }
    return low; // smallest valid rate
}
