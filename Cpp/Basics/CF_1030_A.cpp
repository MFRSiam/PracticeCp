#include <iostream>


int main(){
    int n;
    std::cin >> n;
    bool flag = false;
    while(n--){
        int a;
        std::cin >> a;
        if(a == 1){
            std::cout << "HARD\n";
            flag = true;
            break;
        }
    }
    if(!flag){
        std::cout << "EASY\n";
    }

    return EXIT_SUCCESS;
}