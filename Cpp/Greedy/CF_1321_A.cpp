#include <iostream>
#include <vector>
#include <cmath>

void takeInputs(std::vector<int> &arr, long long &sum)
{
    int weight = 1;
    sum = 0;
    for (int &i : arr)
    {
        std::cin >> i;
        sum += (i * weight);
        weight++;
    }
}

int main()
{
    long long sum_A;
    long long sum_B;
    int n;
    std::cin >> n;
    std::vector<int> A(n);
    std::vector<int> B(n);
    takeInputs(A, sum_A);
    takeInputs(B, sum_B);

    if (sum_A == sum_B or sum_A == 0)
    {
        std::cout << "-1\n";
    }
    else
    {
        // Solve X = Solved By A
        // Solve Y = Solved By B but Not X
        int solve_x = 0, solve_y = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == 1 and B[i] == 0)
            {
                solve_x++;
            }
            if (B[i] == 1 and A[i] == 0)
            {
                solve_y++;
            }
        }
        //std::cout << (int)std::ceil((solve_y + 1) / (solve_x * 1.0F)) << "\n";
        long long value = solve_x;
        int count = 1;
        if(solve_x == 0){
            count = -1;
        }
        else{
            for (int i = 0; i < 10000; i++)
            {
                if(solve_y >= solve_x){
                    solve_x = value * i;
                    count = i;
                }else{
                    break;
                }
            }
        }
        
        std::cout << count << "\n";
    }

    return EXIT_SUCCESS;
}