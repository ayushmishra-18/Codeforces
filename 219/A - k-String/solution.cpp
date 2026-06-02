//A. k-String
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
similar to String LCM problem. 
In string lcm we did basestring*k  and here we have to obtain base string
count the frquency of letters -> frquency array
if counut%k!=0 => print -1 string cannot be split
else count/k 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int k;
    cin>>k;
    string s;
    cin>>s;
    string t="";
    vector<int>freq(26,0);
    for(char ch:s){
        freq[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]%k!=0){
            cout<<-1<<endl;
            return 0;
        }
        int n=freq[i]/k;
        for(int j=0;j<n;j++){
            t=t+char(i+'a');
        }
    }
    for(int i=0;i<k;i++){
        cout<<t;
    }
    cout<<endl;
    
    
    
    return 0;
}