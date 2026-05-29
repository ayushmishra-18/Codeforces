//B. Even Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if((arr[i]%2!=0) && (i%2==0)){
                a++;
            }
            else if((arr[i]%2==0) && (i%2!=0)){
                b++;
            }
        }
        if(a==b){
            cout<<a<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}