#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char b;
        cin >> b;
        if (b == 'c' || b == 'o' || b == 'd' || b == 'e' || b == 'f' || b == 'r' || b == 's')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
