#include <iostream>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;

    print(i + 1, n);   // Recurse first
    cout << i << endl; // Print after recursion
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}
