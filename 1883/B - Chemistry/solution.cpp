//B. Chemistry
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k; 
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int a=0;
        int i=0;
        while(i<n){
            if(i<n-1 && s[i]==s[i+1]){
                i=i+2;
            }
            else{
                a++;
                i++;
            }
        }
        if(a<=k+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}