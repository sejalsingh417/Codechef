#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int s;
    cin >> s;
    while (s--)
    {
        int n;
        cin >> n;
        int trip = 0;
        for (int a = 1; a <= n; a++)
        {
            for (int b = a; b <= n; b += a)
            {
                if (b % a == 0)
                {
                    for (int c = a; c <= n; c += b)
                    {
                        if (c % b == a)
                        {
                            trip += 1;
                        }
                    }
                }
            }
        }
        cout << trip << endl;
    }

    return 0;
}
