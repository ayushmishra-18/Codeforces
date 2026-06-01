//A. C+=
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
a = 1, b = 2, n = 5
Step 1: a<b -> a += b -> a = 3, b = 2
Step 2: b<a -> b += a -> a = 3, b = 5
Step 3: a<b -> a += b -> a = 8, b = 5 
Stopppp 8 > 5. Total steps = 3.
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
        int a,b,n;
        cin>>a>>b>>n;
        int sum1=a,sum2=b;
        int no=0;
        while(a<=n && b<=n){
            if(a<b){
                a+=b;
            }
            else{
                b+=a;
            }
            no++;
        }
        cout<<no<<endl;
        
    }
    return 0;
}