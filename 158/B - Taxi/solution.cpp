//B. Taxi
 
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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==2){
            two++;
        }
        if(arr[i]==3){
            three++;
        }
        if(arr[i]==4){
            four++;
        }
    }
 
    int taxis=0;
    taxis+=four;
    taxis+=three;
    if(one>three){
        one-=three;
    }
    else{
        one=0;
    }
    taxis+=(two/2);
    if(two%2!=0){
        taxis++;
        
        if(one>2){
            one-=2;
        }
        else{
            one=0;
        }
    }
    if(one>0){
        taxis+=(one+3)/4; 
    }
    
    cout<<taxis<<endl;
    
    return 0;
}