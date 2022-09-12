#include <iostream>
#include <string>

int main(){
    std::string number;

    std::cin >> number;

    int counter = 0;
    for(char &c:number){
        if((c >= '5' and c < '9') or (counter != 0 and c=='9')){
            int x = c - '0';
            x = 9 - x;
            c = '0' + x;
        }
        counter++;
    }
    std::cout << number << "\n";

    return EXIT_SUCCESS;
}