//A. Jellyfish and Undertale
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
        vector<long long int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        long long int c=b;
        for(int i=0;i<n;i++){
            c=c+min(x[i],a-1);
        }
        cout<<c<<endl;
    }
}