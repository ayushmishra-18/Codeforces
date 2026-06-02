//B. Present from Lena
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
Bakwaas question
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
    for(int i=0;i<=n;i++){
        //space
        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        }
        //no
        for(int j=0;j<=i;j++){
            if(j>0){
                cout<<" ";
            }
            cout<<j;
        }
        for(int j=i-1;j>=0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
         
 
    }
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<2*(i+1);j++){
            cout<<" ";
        }
 
        //no
        for(int j=0;j<=n-i-1;j++){
            if(j>0){
                cout<<" ";
            }
            cout<<j;
        }
        for(int j=n-i-2;j>=0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
 
    return 0;
}