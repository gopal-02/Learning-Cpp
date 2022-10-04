#include <iostream>
using namespace std;
int main()
{
    int n, h, f, t, ten, one;
    cin >> n;
    switch (0)
    {
    case (0):
        h = n / 100;
        n = n - h * 100;
        cout << "No of 100  rupee notes =" << h << endl;
    case (50):
        f = n / 50;
        n = n - f * 50;

        cout << "No of 50  rupee notes =" << f << endl;
    case (20):

        t = n / 20;
        n = n - t * 20;
        cout << "No of 20  rupee notes =" << t << endl;
    case (10):

        ten = n / 10;
        n = n - ten * 10;
        cout << "No of 10  rupee notes =" << ten << endl;
    case (1):

        one = n / 1;
        cout << "No of 1  rupee notes =" << one << endl;
        break;
    default:
        cout << "Less than 10";
    }
    return 0;
}