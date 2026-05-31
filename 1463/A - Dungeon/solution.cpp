//A. Dungeon
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
regular shot -> -1
enchanced shot -> -3  ( multiple of 7)
1 cycle = 9 damage
 
3 2 4
sum=9
k=1
YES
 
10 1 7
sum=18
k=2
but b is less than k
NO
 
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
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int k=sum/9;
        if(sum%9==0 && a>=k && b>=k && c>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}