#include <iostream>
#include <string>

void toLower(std::string &s)
{
    for (char &c : s)
    {
        c = std::tolower(c);
    }
}

int main()
{
    std::string a, b;
    std ::cin >> a >> b;
    toLower(a);
    toLower(b);
    bool flag = false;
    for (int i = 0; i < a.length(); i++){
        if(a[i]!=b[i]){
            if(a > b){
                std ::cout << "1\n";
                flag = true;
                break;
            }else{
                std ::cout << "-1\n";
                flag = true;
                break;
            }
        }
    }
    

    if(!flag){
        std::cout << "0\n";
    }

    return EXIT_SUCCESS;
}