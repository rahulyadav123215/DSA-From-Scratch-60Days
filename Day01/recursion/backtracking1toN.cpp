#include <iostream>
using namespace std;

void print(int i, int n) {
    if (i > n)
        return;

    print(i + 1, n); // first go deep
    cout << i << " "; // then print on the way back
}

int main() {
    int n;
    cin >> n;
    print(1, n);
    return 0;
}
