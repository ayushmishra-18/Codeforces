#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string S=s+s;
        int a=0,b=0;
        for(int i=0;i<2*n;i++){
            char ch=S[i];
            if(ch=='0'){
                b++;
            }
            else{
                if(b>a){
                    a=b;
                }
                b=0;
            }
        }
        if (b>a) {
            a=b;
        }
        cout<<a<<endl;
    }
}