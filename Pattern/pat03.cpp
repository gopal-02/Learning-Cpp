#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout <<c;
        }
        for (int c = r; c < n; c++)
        {
            cout << " ";
        }
        int val = r;
        for (int c = 1; c <= n - r; c++)
        {
            cout << " ";
        }
        for (int c = n - r + 1; c <= n; c++)
        {
            cout <<val++;
        }

        cout << endl;
    }
    return 0;
}