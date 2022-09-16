#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a;
        cin >> a;
        if(a>10)
        {
            cout << 10 << " " << a-10 << endl;
        }
        else
            cout << 1 << " " << a-1 << endl;
    }

    return 0;
}