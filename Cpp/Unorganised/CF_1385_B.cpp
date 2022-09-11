#include <iostream>
#include <vector>


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t, n;
    int permutations[100]{0};
    int count;
    std::cin >> t;

    while (t--)
    {
        std::cin >> n;
        n = 2 * n;
        for (int i = 0; i < n; i++)
        {
            std::cin >> permutations[i];
        }
        //cout << "TEST: " << permutations[0] << endl;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = i; j >= 0; j--)
            {
                if (permutations[j] == permutations[i])
                {
                    count++;
                }
            }
            if (count == 1)
            {
                std::cout << permutations[i] << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;



    return EXIT_SUCCESS;
}