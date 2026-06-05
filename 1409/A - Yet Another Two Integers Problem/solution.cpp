//A. Yet Another Two Integers Problem
 
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
        int a,b;
        cin>>a>>b;
        int c=abs(b-a);
        int count=c/10;
 
        // while(c>=10){
        //     c=c-10;
        //     count++;
        // }
        if(c%10!=0){
            count++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}