#include <iostream>



int main()
{
    int number, iteration;
    std::cin >> number >> iteration;

    for (int i = 0; i < iteration; i++)
    {
        if (number % 10 == 0)
        {
            number = number / 10;
        }
        else
        {
            number--;
        }
    }

    std::cout << number << "\n";

    return 0;
}
