//A. Gennady and a Card Game
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    string s;
    cin>>s;
    vector<string>arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int a=0;
    for(auto x:arr){
        if(x[0]==s[0] || x[1]==s[1]){
            a=1;
            break;
        }
    }
    if(a==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
 
    return 0;
}