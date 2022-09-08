#include <iostream> //For IO
#include <string>   //For String Operations
#include <vector> // For Dynamic Array

int main(){
    int n,k;
    std::cin >> n >> k;
    std::string s;
    std::cin >>s;

    // A vector to hold The frequency of Char
    std::vector<int> arr(26);
    // To Find The frequency of char
    for(char c:s){
        arr[c-'a']++;
    }

    // To Check till which letter we need to remove, default value is Z cause its the final value
    int pos  = 26;
    // If k is more than a frequency of a char then we need to delete all of those char and move to the next one;
    // here we find till what letter we need to delete, to find its position.
    for (int i = 0; i < 26; i++)
    {
        if(k>=arr[i]){
            k -= arr[i];
        }else{
            // k < arr[i] that means its upto this letter we need to delete the char
            pos = i;
            break;
        }
    }

    // Ans String
    std::string ans;
    // Remaining Operations
    int rem = k;
    for(auto c:s){
        int cur = c - 'a';
        // if cur > pos that means this letter is not in our concern
        if(cur > pos or (cur == pos and rem == 0 )){
            ans += c;
        }else if(cur == pos){ // we rem-- to reduce one operation
            rem--;
        }
    }
    
    std::cout << ans << "\n";

    return EXIT_SUCCESS;
}