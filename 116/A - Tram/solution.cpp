#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=0;
    int ans=0;
    int arr[2];
    while(n--){
        for(int i=0;i<2;i++){
            cin>>arr[i];
        }
        total=(total-arr[0]+arr[1]);
        ans=max(ans,total);
    }
    cout<<ans;
}