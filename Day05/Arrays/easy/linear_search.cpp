#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &a, int x) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == x) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int x = 30;

    int index = linearSearch(arr, x);
    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
