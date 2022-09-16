#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        int a;
        std::cin >> a;
        if(a > 10){
            std::cout << a-10 << " " << 10 << "\n";
        }else{
            std::cout << 0 << " " << a  << "\n";
        }
    }
    

    return EXIT_SUCCESS;
}