#include <iostream> // For IO
#include <cmath> // For Absolute Value

struct Tracker
{
    int x;
    int y;
};


int main(){
    int matrix[5][5]; // A 5 X 5 Matrix
    Tracker T = {0,0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                T.x = i;
                T.y = j;
            }
        }
    }

    // Debug Code To Show The Matrix
    /*
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    */
    // The Difference From The middle
    std::cout << std::abs(2-T.x) + std::abs(2-T.y) << "\n";


    return EXIT_SUCCESS;
}