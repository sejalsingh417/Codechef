#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int square = (int)(sqrt(n));
        int side = square * a;
        cout << side << endl;
    }
    return 0;
}
