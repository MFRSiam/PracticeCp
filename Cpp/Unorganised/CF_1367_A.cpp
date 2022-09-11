#include <iostream>
#include <string>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string secondString;
        std::cin >> secondString;

        std::string primaryString = "";
        primaryString += secondString[0];
        int ignorCounter = 0;
        for(int i=1;i<secondString.length()-1;i++){
            if(secondString[i]!=secondString[i-1]){
                primaryString+= secondString[i];
                ignorCounter = 0;
            }else{
                ignorCounter++;
            }
            if(ignorCounter > 1){
                primaryString += secondString[i];
                ignorCounter = 0;
            }
        }
        primaryString += secondString[secondString.length()-1];
        std::cout << primaryString << "\n";
    }

    return EXIT_SUCCESS;
}