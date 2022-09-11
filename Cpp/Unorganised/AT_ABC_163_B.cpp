#include <iostream>
#include <vector>

int main(){
    int n,m;

    std::cin >> n >> m;

    std::vector<int> assignment(m);

    int sum  = 0;
    for(int &k:assignment){
        std::cin >> k;
        sum += k;
    }

    if(sum > n){
        std::cout << "-1\n";
    }else{
        std::cout << n - sum << "\n";
    }

    return EXIT_SUCCESS;
}