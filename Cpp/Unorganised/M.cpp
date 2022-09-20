#include <iostream>

// int **allocate(int n)
// {
//     int **cowPoint = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         cowPoint[i] = new int[2];
//     }
//     return cowPoint;
// }

bool check_X(int x, int point[][2])
{
    if (x > point[0][0] and x < point[1][0])
    {
        return true;
    }
    else if (x < point[0][0] and x > point[1][0])
    {
        return true;
    }else{
        return false;
    }
}

bool check_Y(int y,int point[][2]){
    if(y > point[0][1] and y < point[1][1]){
        return true;
    }else if(y < point[0][1] and y > point[1][1]){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int t;
    std::cin >> t;
    for (int casa = 1; casa <= t; casa++)
    {
        int point[2][2];
        std::cin >> point[0][0] >> point[0][1] >> point[1][0] >> point[1][1];
        int cows;
        std::cin >> cows;
        std::cout << "Case " << casa << ":\n";
        for (int i = 0; i < cows; i++)
        {
            int c_x, c_y;
            std::cin >> c_x >> c_y;
            if(check_X(c_x,point)){
                if(check_Y(c_y,point)){
                    std::cout << "Yes\n";
                }else{
                    std::cout << "No\n";
                }
            }else{
                std::cout << "No\n";
            }
        }
        
    }

    return EXIT_SUCCESS;
}