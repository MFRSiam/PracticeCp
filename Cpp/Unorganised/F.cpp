#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for (int ca=1;ca<=t;ca++)
    {
        int students;
        long total_dust =0;
        std::cin >> students;
        for(int i=1;i<=students;i++){
            int temp;
            std::cin >> temp;
            if(temp > 0){
                total_dust += temp;
            }
        }
        std::printf("Case %d: %ld\n",ca,total_dust);
    }
    



    return EXIT_SUCCESS;
}