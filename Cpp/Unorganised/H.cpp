#include <iostream>
#include <bitset>
#define Bitlimit 32

int main(){
    int t;
    std::cin >> t;
    int cases = 1;
    while (t--)
    {   
        int n;
        std::cin >> n;
        std::bitset<Bitlimit>  binary(n);
        std::string temp = binary.to_string();
        for(int i=temp.length()-1;i>=0;i--){
            if(temp[i] == '1' and temp[i-1] == '0'){
                temp[i] = '0';
                temp[i-1] = '1';
                break;
            }
        }
        std::bitset<Bitlimit> result(temp);
        std::printf("Case %d: %ld\n",cases,result.to_ulong());
        cases++;
    }
    


    return EXIT_SUCCESS;
}