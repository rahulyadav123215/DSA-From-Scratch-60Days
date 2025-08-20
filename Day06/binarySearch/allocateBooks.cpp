#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
    isValid() checks if it's possible to allocate books such that
    no student gets more than maxAllowedPages.
    Time: O(N)
*/
bool isValid(vector<int> &arr, int N, int M, int maxAllowedPages)
{
    int students = 1;  
    int pages = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > maxAllowedPages) 
            return false;

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
            if (students > M) 
                return false;
        }
    }
    return true;
}

/*
    allocateBooks() finds the minimum possible maximum pages.
    Time Complexity: O(N * log(sum - maxi))
    Space Complexity: O(1)
*/
int allocateBooks(vector<int> &arr, int N, int M)
{
    if (M > N) 
        return -1;

    int sum = 0, maxi = INT_MIN;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }

    int ans = -1;
    int st = maxi, end = sum;  // ✅ Binary search range

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, N, M, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int N = 4, M = 2;
    cout << allocateBooks(arr, N, M) << endl;  // ✅ Output = 6
    return 0;
}
