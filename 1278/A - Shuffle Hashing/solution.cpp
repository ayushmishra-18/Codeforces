//A. Shuffle Hashing
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
abacaba
zyx aabcaa bkjh
firstly if n1 > n2 -> "NO"
else pick a substring from the string of length n1 and sort it ,then compare it to original string
 
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
        string p,h;
        cin>>p>>h;
        sort(p.begin(),p.end());
        int n1=p.size();
        int n2=h.size();
        if(n2<n1){
            cout<<"NO"<<endl;
        }
        else{
            int a=0;
            for(int i=0;i<=n2-n1;i++){
                string sub=h.substr(i,n1);
                sort(sub.begin(),sub.end());
                if(sub==p){
                    a=1;
                    break;
                }
            }
            if(a==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}