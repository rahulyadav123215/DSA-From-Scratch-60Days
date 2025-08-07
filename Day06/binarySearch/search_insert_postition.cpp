

int searchInsert(vector<int>& arr, int m)
{
    int n = arr.size();
	int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // maybe an answer
        if (arr[mid] >= m) {
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