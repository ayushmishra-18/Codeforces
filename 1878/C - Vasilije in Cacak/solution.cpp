//C. Vasilije in Cacak
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int maxi=0,mini=0;
        for(int i=n;i>n-k;i--){
            maxi=maxi+i;
        }
        mini=k*(k+1)/2;
        if(x>=mini && x<=maxi){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}