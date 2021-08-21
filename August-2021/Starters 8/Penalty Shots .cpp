#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int sum1 = 0;
    int sum2 = 0;
    int A1, A2, A3, A4, A5, A6, A7, A8, A9, A10;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> A1 >> A2 >> A3 >> A4 >> A5 >> A6 >> A7 >> A8 >> A9 >> A10;
        sum1 = A1 + A3 + A5 + A7 + A9;
        sum2 = A2 + A4 + A6 + A8 + A10;

        if (sum1 > sum2)
        {
            cout << "1" << endl;
        }
        else if (sum2 > sum1)

        {
            cout << "2" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
