//A. Chat room
 
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
    string t="hello";
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[j]){
            j++;
        }
        if(j==5){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
 
    return 0;
}