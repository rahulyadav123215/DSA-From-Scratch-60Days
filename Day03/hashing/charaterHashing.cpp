#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // pre compute
    int hash[256] = {0};
    for (int i = 0; i <= s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;

        // fetch
        cout << hash[ch] << endl;
    }

    return 0;
}