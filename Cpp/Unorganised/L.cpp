#include <iostream>
#include <cstdio>
#include <cmath>
#define Pi acos(-1)

int main(){
    int t;
    std::scanf("%d",&t);
    int casa = 1;
    while (t--)
    {
        double radius;
        int noOfBullets;
        std::cin >> radius >> noOfBullets;
        double angle = Pi/noOfBullets;
        double sinAngle = std::sin(angle);
        double r = (radius * sinAngle) / (1 + sinAngle);
        std::printf("Case %d: %0.6lf\n",casa,r);
        casa++;
    }
    return EXIT_SUCCESS;
}