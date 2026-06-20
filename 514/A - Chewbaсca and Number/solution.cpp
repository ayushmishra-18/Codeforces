//A. Chewbaсca and Number
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++){
//         char n=s[i];
//         if(n>'9'-n){
//             n='9'-n;
//         }
//     }
//     cout<<s<<endl;
 
    int n;
    cin>>n;
    int m=n;
    vector<int>v;
    if(n==0) {
        cout<<0<<endl;
    }
    else{
        while(n!=0){
        v.push_back(n%10);
        n=n/10;
        }
        for(int i=0;i<v.size();i++) {
            if(v[i]>=5){
                if(i==v.size()-1 && v[i]==9) {
                    continue;
                }
                v[i]=9-v[i];
            }
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
    }
}