#include <iostream>
#include <set>


int f(int x){
    x += 1;
    while(x % 10 ==0){
        x /= 10;
    }
    return x;
}

int main(){
    int input;
    std::set<int> n_s;
    std::cin >> input;
    while(!n_s.contains(input)){
        n_s.insert(input);
        input = f(input);
    }
    std::cout << n_s.size() << "\n";


    return EXIT_SUCCESS;
}