#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string x;

    std::cin >> x;

    unsigned long long counter{0};
    for (char c : x)
    {
        int x = c - '0';
        if (x == 4 || x == 7)
        {
            counter++;
        }
    }
    std::string y = std::to_string(counter);

    bool lucky = true;
    for (char c : y)
    {
        if (c != '4' && c != '7')
        {
            lucky = false;
            break;
        }
    }
    if (lucky)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }

    return EXIT_SUCCESS;
}