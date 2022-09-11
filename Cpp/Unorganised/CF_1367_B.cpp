#include <iostream>

int main()
{
    int t;
    int n;
    int unequal1;
    int unequal0;
    std::cin >> t;
    while (t--)
    {
        unequal1 = unequal0 = 0;
        std::cin >> n;
        int a[1000];
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
            if (a[i] % 2 != (i % 2))
            {
                if (a[i] % 2 == 0)
                {
                    unequal0++;
                }
                else if (a[i] % 2 == 1)
                {
                    unequal1++;
                }
            }
        }

        //cout << "1's : " << unequal1 << endl;
        //cout << "0's : " << unequal0 << endl;
        if (unequal1 != unequal0)
        {
            std::cout << "-1\n";
        }
        else
        {
            std::cout << unequal1 << "\n";
        }
    }

    return 0;
}