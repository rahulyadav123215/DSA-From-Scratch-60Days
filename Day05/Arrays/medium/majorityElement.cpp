#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
    int cnt = 0;
    int el;

    // Step 1: Find a candidate using Moore's Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(cnt == 0) {
            cnt = 1;
            el = arr[i];
        } else if(arr[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Step 2: Verify if the candidate is actually a majority
    int cnt1 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == el) cnt1++;
    }

    if(cnt1 > n / 2) {
        return el;
    }
    return -1;
}
