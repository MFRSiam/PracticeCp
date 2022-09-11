#include <iostream>
#include <string>

int main(){
    std::string number;

    std::cin >> number;

    for(char &c:number){
        if(c >= '5' and c < '9'){
            int x = c - '0';
            x = 9 - x;
            c = '0' + x;
        }
    }
    std::cout << number << "\n";

    return EXIT_SUCCESS;
}