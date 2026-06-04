#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>ans;
        if(k==1 && x==1){
            cout<<"NO"<<endl;
        }
        else if(n%2!=0 && k==2 &&x==1){
            cout<<"NO"<<endl;
        }
        else if(x!=1){
            int m=n;
            cout<<"YES"<<endl;
            while(m--){
                ans.push_back(1);
            }
        }
        else if(n%2==0 && x!=2){
            int m=n;
            cout<<"YES"<<endl;
            while((m=m-2)>=0){
                ans.push_back(2);
            }
        }
        else{
            cout<<"YES"<<endl;
            int m=n-3;
            ans.push_back(3);
            while((m=m-2)>=0){
                ans.push_back(2);
            }
        }
        if(!ans.empty()){
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}