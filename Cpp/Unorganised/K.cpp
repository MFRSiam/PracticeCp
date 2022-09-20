#include <iostream>

int main(){
    int t;
    std::cin >> t;
    int cases = 1;
    while (t--)
    {
        int pos,lift;
        std::cin >> pos >> lift;
        if(pos<=lift){
            int temp = lift-pos;
            std::cout << "Case "<< cases << ": " <<(temp*4) +(4*pos) + 3 +3 +3 + 5 + 5 << "\n";
        }else{
            int temp =pos - lift;
            std::cout << "Case "<< cases << ": " <<(temp*4) + (4*pos) + 3 +3 +3 + 5 + 5 << "\n";
        }
        cases++;
    }
    


    return EXIT_SUCCESS;
}