#include <bits/stdc++.h>
using namespace std;
#define ff(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define int unsigned long long

int32_t main()
{
    // your code goes here
    w(t)
    {
        int n, s;
        cin >> n >> s;

        int res = n * (n + 1) / 2;
        res = res - s;
        if (res >= 1 and res <= n)
            cout << res << endl;
        else
            cout << -1 << endl;
    }
    cout.clear();
    cin.clear();
    return 0;
}