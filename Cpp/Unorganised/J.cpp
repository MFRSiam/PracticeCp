#include <cstdio>
#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for(int cn=1;cn<=t;cn++)
    {
        int a,b,c;
        std::cin >> a >> b >> c;
        if((a*a + b*b == c*c) || (a*a + c*c == b*b ) || (c*c + b*b == a*a) )
        {
            std::printf("Case %d: yes\n",cn);
        }

        else std::printf("Case %d: no\n",cn);
    }

    return 0;
}