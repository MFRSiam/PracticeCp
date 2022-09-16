#include <iostream>

int main(){
    int t;
    std::cin >> t;
    int i = 1;
    while (t--)
    {
        int a,b;
        std::cin >> a >> b;
        std::cout << "Case " << i << ": " <<(a+b) << "\n";
        i++;
    }


    return EXIT_SUCCESS;
}