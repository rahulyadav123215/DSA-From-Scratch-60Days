#include <bits/stdc++.h>
using namespace std;


void pushZerosAtEnd(vector<int> &arr) 
{
    int n = arr.size();
    int j = -1;

    // Find the first zero
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return; // No zero found

    // Move non-zero elements after j
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 4};

    pushZerosAtEnd(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
