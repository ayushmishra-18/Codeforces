//B. Chocolates
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
1 2 1 3 6
1 2 0 0 0 -> 10
 
3 2 5 4 10
2 0 2 0 0 -> 20
 
 
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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int choco=0;
    int add=arr[n-1];
    choco+=add;
    for(int i=n-2;i>=0;i--){
        add=min(arr[i],add-1);
        if(add<0){
            add=0;
        }
        choco+=add;
    }    
    cout<<choco<<endl;
    
    return 0;
}