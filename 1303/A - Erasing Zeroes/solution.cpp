//A. Erasing Zeroes
 
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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=-1,b=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                a=i;
                break;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                b=i;
                break;
            }
        }
        int count=0;
        if(a!=-1){
            for(int i=a;i<b;i++){
                if(s[i]=='0'){
                    count++;
                }
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}