#include <iostream>
#include <algorithm>

int main(){
    unsigned long long a,b,c;
    std::cin >> a >> b >> c;
    unsigned long long sum = (2*c) + std::min(a,b) + std::min(std::max(a,b), std::min(a,b)+1);
    std::cout << sum << "\n";


    return EXIT_SUCCESS;
}