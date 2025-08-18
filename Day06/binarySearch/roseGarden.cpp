int roseGarden(vector<int> arr, int k, int m)
{
    auto possible = [&](int day) {
        int cnt = 0, no_ofB = 0;
        for (int x : arr) {
            if (x <= day) {
                cnt++;
                if (cnt == k) {
                    no_ofB++;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
        return no_ofB >= m;
    };

    long long val = 1LL * k * m;
    if (val > arr.size()) return -1;

    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    int low = mini, high = maxi, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
int roseGarden(vector<int> arr, int k, int m)
{
    auto possible = [&](int day) {
        int cnt = 0, no_ofB = 0;
        for (int x : arr) {
            if (x <= day) {
                cnt++;
                if (cnt == k) {
                    no_ofB++;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
        return no_ofB >= m;
    };

    long long val = 1LL * k * m;
    if (val > arr.size()) return -1;

    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    int low = mini, high = maxi, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
