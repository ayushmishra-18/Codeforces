//A. Competitive Programmer
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
60 -> if atleat 1 zero
    if atleast 2 even digits(1zero and one more)
    if sum of digits is divisible by 3
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        string s;
        int a;
        int z=0,even=0,sum=0;;
        cin>>s;
        for(int i=0;i<s.size();i++){
            a=s[i]-'0';
            if(a==0){
                z=1;
            }
            if(a%2==0){
                even++;
            }
            sum=sum+a;
        }
        if(sum%3==0 && even>1 && z==1){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }
        
    }
    return 0;
}