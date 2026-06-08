//C. Registration system
 
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
    vector<pair<string,int>>arr;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i].first==s){
                cout<<s<<arr[i].second<<endl;
                arr[i].second++;
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<"OK"<<endl;
            arr.push_back({s,1});
        }
        
        
    }
    return 0;
}