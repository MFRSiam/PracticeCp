#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        if(n%2 == 1){
            std::cout << "7";
            n -= 3;
        }
        while(n > 0){
            std::cout << "1";
            n -= 2;
        }
        std::cout << "\n";
    }  
    return EXIT_SUCCESS;
}