// return 1 if mid^n == m
// return 0 if mid^n < m
// return 2 if mid^n > m
int fun(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)  // fix here
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int NthRoot(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = fun(mid, n, m);
        if (midN == 1)
        {
            return mid; // mid^n == m
        }
        else if (midN == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // no integer root exists
}
