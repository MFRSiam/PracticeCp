#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for(int &x:arr){
            std::cin >> x;
        }
        std::sort(arr.begin(),arr.end());
        if(arr.front() == arr.back()){
            std::cout << n << "\n";
        }else{
            std::cout << "1\n";
        }
    }
    return EXIT_SUCCESS;
}