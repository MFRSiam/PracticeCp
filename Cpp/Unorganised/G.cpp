#include <cstdio>
#define pi 3.141592653589793238

int main(){
    int t;
    std::scanf("%d",&t);
    for(int c=1;c<=t;c++){
        double radius;
        std::scanf("%lf",&radius);
        double line = radius * 2;
        double area_box = line * line;
        double area_circle = pi * radius * radius;
        double diff = area_box - area_circle;
        diff += 1e-8;
        std::printf("Case %d: %0.2lf\n",c,diff);
    }
    return 0;
}