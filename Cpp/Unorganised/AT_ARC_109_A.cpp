#include <iostream>
#include <algorithm>

int main(){
    int a,b,x,y;
    std::cin >> a >> b >> x >> y;

    int min_Y = std::min(y,(2*x));

    a = 2*a;
    b = 2*b +1;
    int distance = std::abs(a-b);
    int min_y_part = distance/2 * min_Y;
    int min_x_part = distance%2 * x;
    std::cout << min_y_part + min_x_part << "\n";

    return EXIT_SUCCESS;
}