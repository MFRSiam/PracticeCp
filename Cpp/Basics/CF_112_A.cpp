#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    std ::cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int sumA = 0, sumB = 0;

    for (int i = 0; i < a.length(); i++)
    {
        sumA += (a[i] - '0');
        sumB += (b[i] - '0');
    }

    if (sumA < sumB)
        std ::cout << "-1\n";
    else if (sumA > sumB)
        std ::cout << "1\n";
    else
        std ::cout << "0\n";
    return EXIT_SUCCESS;
}