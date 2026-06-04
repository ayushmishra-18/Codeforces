//A. AvtoBus
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=0,maxi=0;
        if(n<4 || n%2!=0){
            cout<<-1<<endl;
        }
        else{
            maxi=n/4;
            mini=(n+5)/6;
            cout<<mini<<" "<<maxi<<endl;
        }
    }
}