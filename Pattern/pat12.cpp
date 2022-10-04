#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        char val = 'A';
        for (int c = 1; c <= n; c++)
        {
           char b='A'+r+c-2;
            cout << b;
        }
        cout << endl;
    }
    return 0;
}