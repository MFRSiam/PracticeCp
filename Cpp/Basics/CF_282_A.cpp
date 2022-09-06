#include <iostream> // For IO
#include <string> // For String Operations

int main(){
    // Stated That the initial Value of the variable x is zero
    int var_X = 0;

    int n; // The number Of Operations
    std::cin >> n; // Getting The Number of operation From User

    // A Loop For N operations
    while(n--){
        std::string operation_code; // The Operation To be performed
        std::cin >> operation_code;
        // For X++, X--, --X, ++X, Operations We Only need to check the 2nd Value of the string 
        if(operation_code[1] == '+'){
            var_X++;
        }else{
            var_X--;
        }
    }
    std::cout << var_X << "\n";

    return EXIT_SUCCESS;
}