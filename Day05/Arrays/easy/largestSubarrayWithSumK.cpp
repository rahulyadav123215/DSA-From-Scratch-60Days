#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    unordered_map<long long, int> mp;
    int res = 0;
    long long prefSum = 0;

    for (int i = 0; i < a.size(); ++i) {
        prefSum += a[i];

        if (prefSum == k)
            res = i + 1;

        if (mp.find(prefSum - k) != mp.end())
            res = max(res, i - mp[prefSum - k]);

        if (mp.find(prefSum) == mp.end())
            mp[prefSum] = i;
    }

    return res;
}