#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter the value of n:";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "The sum upto " << n << " is :" << sum << endl;
    return 0;
}