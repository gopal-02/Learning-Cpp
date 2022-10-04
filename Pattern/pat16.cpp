#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        char ch ='A'+r-1;
        for (int c = 1; c <= n; c++)
        {
            cout <<ch++;
        }
        cout << endl;
    }
    return 0;
}