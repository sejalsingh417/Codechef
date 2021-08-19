#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int G1, S1, B1, G2, S2, B2;
    int sum1;
    int sum2;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;

        sum1 = G1 + S1 + B1;
        sum2 = G2 + S2 + B2;
        if (sum1 > sum2)
        {
            cout << "1" << endl;
        }
        else
            cout << "2" << endl;
    }

    return 0;
}
