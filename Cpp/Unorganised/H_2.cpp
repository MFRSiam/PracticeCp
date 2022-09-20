#include <iostream>
#include <bitset>
#include <algorithm>
#define Bitlimit 32


void toBin(std::string &s,int n){
    while(n)
    {
        s+=((n%2)+'0');
        n>>=1;
    }
    //cout<<s<<'\n';
    s+='0';
}

int toDec(std::string s){
    int ans=0,curr=1;
    for(int i=0;i<s.size();i++)
    {
        ans+=curr*(s[i]-'0');
        curr<<=1;
    }
    return ans;
}

int main(){
    int t;
    std::cin >> t;

    for(int k=1;k<=t;k++){
        int n;
        std::cin >> n;
        std::string temp = "";
        toBin(temp,n);
        int ones=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]=='1')
                ones++;
            if(temp[i]=='1' && temp[i+1]=='0')
            {
                ones--;
                std::swap(temp[i],temp[i+1]);
                for(int j=0;j<i && ones;j++)
                {
                    ones--;
                    temp[j]='1';
                }
                break;
            }
            else
                temp[i]='0';
        }
        std::printf("Case %d: %d\n",k,toDec(temp));
    }

    return EXIT_SUCCESS;
}