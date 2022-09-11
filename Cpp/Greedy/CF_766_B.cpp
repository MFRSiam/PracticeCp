#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(auto &i:arr){
        std::cin >> i;
    }
    std::sort(arr.begin(),arr.end());

    bool flag = false;
    for(int i=1;i<n-1;i++){
        if(arr[i-1]+arr[i] > arr[i+1]){
            std::cout << "YES\n";
            flag = true;
            break;
        }
    }
    if(!flag){
        std::cout << "NO\n";
    }

    return EXIT_SUCCESS;
}