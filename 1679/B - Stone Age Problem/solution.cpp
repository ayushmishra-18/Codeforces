//B. Stone Age Problem
 
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
    int n,Q;
    cin>>n>>Q;
    int sum=0;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        sum=sum+arr[i].first;
    }
 
    int a=0;
    int b=-1;
    for(int j=1;j<=Q;j++){
        int q;
        cin>>q;
        if(q==1){
            int i,x;
            cin>>i>>x;
            i--;
            int k;
            if(arr[i].second<b){
                k=a;
            }
            else{
                k=arr[i].first;
            }
            sum=sum-k+x;
            arr[i].first=x;
            arr[i].second=j;
            cout<<sum<<endl;
        }
        if(q==2){
            int x;
            cin>>x;
            a=x,b=j;
            sum=n*x;
            cout<<sum<<endl;
        }
    }
    return 0;
}