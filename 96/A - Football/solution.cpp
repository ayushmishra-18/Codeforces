//A. Football
 
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
    int count=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
            if(count>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            count=1;
        }
    }
    cout<<"NO"<<endl;
    
    return 0;
}