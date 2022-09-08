#include <iostream>
#include <set>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::set<int> unique;
        for(int i=1;i<=n;i++){
            int temp;
            std::cin >> temp;
            if(unique.count(temp)){
                temp++;
            }
            unique.insert(temp);
        }
        std::cout << unique.size() << "\n";
    }

    return EXIT_SUCCESS;
}