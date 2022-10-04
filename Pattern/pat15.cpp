#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        char val2 = 'A' + n - r;
        for (int c = 1; c <= r; c++)
        {
            char val = 'D' - r + c;

            cout << val << val2++;
        }
        cout << endl;
    }
    return 0;
}