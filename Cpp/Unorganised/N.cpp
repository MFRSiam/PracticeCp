#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

void DevisorCount(int n,std::vector<std::pair<int,int>> &counter,const std::vector<int> &Primes){
    int temp = n;
    int ans = 1;
    for(int i=0;i<Primes.size() and Primes[i]*Primes[i] <= n;i++){
        int cnt = 1;
        if(n % Primes[i] == 0){
            while(n%Primes[i] == 0){
                cnt++;
                n /= Primes[i];
            }
            ans = ans*cnt;
        }
    }
    if(n>1){
        ans = ans * 2;
    }
    counter.push_back({temp,ans});
}

void Sieve(std::vector<int> &Primes,int n = 1001){
    std::vector<bool> sv_fn;
    sv_fn.assign(n,true);
    sv_fn[0]=sv_fn[1]=false;
    for(int i=4;i<=n;i += 2){
        sv_fn[i] = false;
    }
    for(int i=3;(i*i)<=n; i+=2){
        if(sv_fn[i]){
            for(int j=(i*i);j<=n;j+=i){
                sv_fn[j] = false;
            }
        }
    }
    Primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(sv_fn[i]){
            Primes.push_back(i);
        }
    }
}

int main(){
    std::vector<int> Primes;
    Sieve(Primes);
    std::vector<std::pair<int,int>> Counter;
    for(int i=1;i<=1000;i++){
        DevisorCount(i,Counter,Primes);
    }
    std::sort(Counter.begin(),Counter.end(),[](auto x,auto y){
        if(x.second < y.second){
            return true;
        }else if(x.second == y.second and x.first > y.first){
            return true;
        }else{
            return false;
        }
    });

    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int temp;
        std::cin >> temp;
        std::printf("Case %d: %d\n",i,Counter[temp-1].first);
    }


    return EXIT_SUCCESS;
}