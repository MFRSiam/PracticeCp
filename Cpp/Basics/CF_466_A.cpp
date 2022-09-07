#include <iostream>

int main()
{
    int n, m, a, b;
    
    std::cin >> n >> m >> a >> b;
    if (m * a <= b)
        std::cout << n * a << "\n";
    else 
        std::cout << (n/m) * b + std::min((n%m) * a, b) << "\n";

    return EXIT_SUCCESS;
}