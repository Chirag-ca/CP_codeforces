#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin >> ts;
    while (ts--)
    {
        char c;
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 'e' || c == 's')
        {
            cout << "Yes" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
