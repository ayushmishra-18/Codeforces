#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s;
    cin>>s1;
    cin>>s2;
    cin>>s;
    int a=s1.size()+s2.size();
    int b=s.size();
    if(a==b){
        string z=s1+s2;
        sort(z.begin(),z.end());
        sort(s.begin(),s.end());
        if(z!=s){
                cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    else{
        cout<<"NO";
    }
}