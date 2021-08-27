#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        string T;
        cin >> T;
        int count = 0;
        int x = 0, y = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '1')
            {
                x++;
            }
            if (T[i] == '1')
            {
                y++;
            }
        }

        cout << min(x, min(y, N / 2)) << endl;
    }
    return 0;
}