#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n, m, q;
        cin >> n >> m >> q;
        unordered_set<int> st;
        int f = 1;
        while (q--)
        {
            char ch;
            int i;
            cin >> ch >> i;
            if (f == 1)
            {
                if (ch == '-')
                {
                    if (st.find(i) != st.end())
                    {
                        st.erase(i);
                    }
                    else
                    {
                        f = 0;
                    }
                }
                else
                {
                    if ((int)st.size() == m)
                    {
                        f = 0;
                    }
                    else
                    {
                        st.insert(i);
                    }
                }
            }
        }
        if (f == 0)
        {
            cout << "Inconsistent" << endl;
        }
        else
        {
            cout << "Consistent" << endl;
        }
    }

    return 0;
}
