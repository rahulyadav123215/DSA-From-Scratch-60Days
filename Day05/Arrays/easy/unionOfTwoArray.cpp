#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    set<int> st;

    for (int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }

    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }

    return temp;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    vector<int> result = sortedArray(a, b);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
