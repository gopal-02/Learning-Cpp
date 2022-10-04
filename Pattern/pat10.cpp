#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        char b = 'A';
        for (int c = 1; c <= n; c++)
        {
            
            cout << b++;
        }
        cout << endl;
    }
    return 0;
}