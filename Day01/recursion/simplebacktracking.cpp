#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    print(n - 1);     // backtrack down to 1
    cout << n << " "; // print on the way back up
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}