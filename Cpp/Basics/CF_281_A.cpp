#include <iostream> // For IO



void toUpper(char &c){
    if(c >= 'a' and c<= 'z'){
        c = c - 32;
    }
}

int main(){
    char arr[1000];
    std::cin >> arr;
    toUpper(arr[0]);
    for(int i=0;arr[i]!='\0';i++){
        std::cout << arr[i];
    }
    std::cout << "\n";
    return EXIT_SUCCESS;
}