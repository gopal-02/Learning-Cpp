#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2, count = 0;

    while (i < n)
    {
        if (n % i == 0)
        { // cout<<"not primefor "<<i<<endl;
            count = 1;
        }
        else
        {
            // cout<<"prime for "<<i<<endl;
        }
        i++;
    }
    if (count == 0)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
    return 0;
}