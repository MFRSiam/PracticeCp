#include <iostream>
#include <cmath>


void swap(long long int &x,long long int &y){
    int c =x;
    x = y;
    y = c;
}

int main(){
    long long t;
    std::cin >> t;

    int cases = 1;

    while(t--){
        long long int n;
        std::cin >> n;
        long long int squrt = ceil(sqrt(n));
        long long int diff = squrt * squrt - n;
        long long int x,y;
        if(diff < squrt){
            y = diff+1;
            x = squrt;
        }else{
            x = 2*squrt-diff-1;
            y = squrt;
        }
        if(squrt & 1){
            swap(x,y);
        }
        std::printf("Case %d: %lld %lld\n",cases,x,y);
        cases++;
    }

    return EXIT_SUCCESS;
}