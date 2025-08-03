#include <iostream>
using namespace std;

// Merge two sorted subarrays: arr[l..m] and arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1; // size of left half
    int n2 = r - m;     // size of right half

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    int i = 0, j = 0, k = l; // Initial indexes

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive mergeSort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Same as (l+r)/2 but avoids overflow

        mergeSort(arr, l, m);     // Sort first half
        mergeSort(arr, m + 1, r); // Sort second half

        merge(arr, l, m, r);      // Merge sorted halves
    }
}

// Utility function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {8, 4, 5, 2, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}




// Original array: 8 4 5 2 9 1 
// Sorted array:   1 2 4 5 8 9 


// mergeSort() recursively divides the array into halves.

// merge() combines two sorted halves into one.

// Uses extra space (temporary arrays).

// Time Complexity: O(n log n)

// Space Complexity: O(n)