#include <iostream>
#define PI 3.1415926535

int main(){
    unsigned int radius;
    std::cin >> radius;

    double cirpumference = PI * 2 * radius;

    
    std::cout << cirpumference << "\n";

    return EXIT_SUCCESS;
}