//B. Digital root
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
1->1
2->2
9->9
 
10->1
11->2
18->9
 
19->1
20->2
27->9
 
28->1
29->2
36->9
 
pattern observed!!!!!
ans=(k-1)*9+x
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
        int k,x;
        cin>>k>>x;
        cout<<(k-1)*9+x<<endl;
        
    }
    return 0;
}