#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int a;
    while (t--)
    {
        cin >> a;
        if (a < 1600)
        {
            cout << "3" << endl;
        }
        else if (a <= 1600 || a < 2000)

        {
            cout << "2" << endl;
        }
        else
            cout << "1" << endl;
    }
    return 0;
}
