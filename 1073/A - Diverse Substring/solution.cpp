//A. Diverse Substring
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
Consecutive same letter nhi aane chahiye
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1];
            return 0;
        }
    }
    cout<<"NO"<<endl;
        
    
    return 0;
}