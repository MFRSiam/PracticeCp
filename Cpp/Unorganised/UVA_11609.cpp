#include <cstdio>
#include <iostream>


#define MOD 1000000007

long long mod_pow(long long a, int b){
    long long ret = 1;
    
    while(b){
        if(b & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    
    return ret;
}


int main(){
    int t,n;
    
    std::cin >> t;
    
    for(int cases = 1;cases <= t;++cases){
        std::cin >> n;
        
        printf("Case #%d: %lld\n",cases,n * mod_pow(2,n - 1) % MOD);
    }
    

    return 0;
}