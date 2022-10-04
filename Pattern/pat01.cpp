#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        int val = r - 1;
        for (int c = 1; c <= n - r; c++)
        {
            cout << " ";
        }
        for (int c = n - r + 1; c <= n; c++)
        {
            cout << ++val;
        }
        for (int c = n + 1; c <= n + r - 1; c++)
        {
            cout << --val;
        }
        cout << endl;
    }
    return 0;
}