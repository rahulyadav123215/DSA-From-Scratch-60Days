#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &skill, int left, int right)
{
    if (left >= right)
        return 0;

    int mid = (left + right) / 2;
    int count = countPairs(skill, left, mid) + countPairs(skill, mid + 1, right);

    // Count valid pairs: skill[i] > 2 * skill[j]
    int j = mid + 1;
    for (int i = left; i <= mid; ++i)
    {
        while (j <= right && skill[i] > 2LL * skill[j])
        {
            ++j;
        }
        count += (j - (mid + 1));
    }

    // Merge the two sorted halves
    vector<int> temp;
    int i = left;
    j = mid + 1;
    while (i <= mid && j <= right)
    {
        if (skill[i] <= skill[j])
            temp.push_back(skill[i++]);
        else
            temp.push_back(skill[j++]);
    }
    while (i <= mid)
        temp.push_back(skill[i++]);
    while (j <= right)
        temp.push_back(skill[j++]);

    for (int k = left; k <= right; ++k)
    {
        skill[k] = temp[k - left];
    }

    return count;
}

int team(vector<int> &skill, int n)
{
    return countPairs(skill, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> skill(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> skill[i];
    }
    cout << team(skill, n) << endl;
    return 0;
}
