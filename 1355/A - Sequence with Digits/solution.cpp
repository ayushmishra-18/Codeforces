//A. Sequence with Digits
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
formula -> a = a + min*max
generate digits from a
equate them to mind and maxd
if  mind==0 break
else a = a + mind * maxd
 
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
        int a,k;
        cin>>a>>k;
        k--;
        while(k--){
            int b=a;
            int mind=9;
            int maxd=0;
            while(b>0){
                int d=b%10;
                mind=min(mind,d);
                maxd=max(maxd,d);
                b=b/10;
            }
 
            if(mind==0){
                break;
            }
            a=a+(mind*maxd);
            
        }
        cout<<a<<endl;
        
    }
    return 0;
}