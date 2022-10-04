#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, i = 1;
    long long int sum;
    cout << a << endl
         << b << endl;
    while (i <= n - 2)
    {
        sum = a + b;
        cout << i << " " << sum << endl;
        a = b;
        b = sum;
        i++;
    }
    return 0;
}