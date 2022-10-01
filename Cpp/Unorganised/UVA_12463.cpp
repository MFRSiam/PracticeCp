#include <iostream>

int main() {
    int a, b, c, d, e;
    while(std::scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) == 5) {
        if(a+b+c+d+e == 0)  break;
        std::printf("%d\n", a*b*c*d*d*e*e);
    }
    return 0;
}