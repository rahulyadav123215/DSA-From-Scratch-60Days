bool searchInARotatedSortedArrayII(vector<int>& A, int key) {
    int n = A.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == key) return true;

        // Handle duplicates
        if (A[low] == A[mid] && A[mid] == A[high]) {
            low++;
            high--;
            continue;
        }

        // Left half is sorted
        if (A[low] <= A[mid]) {
            if (A[low] <= key && key <= A[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (A[mid] <= key && key <= A[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return false;
}

