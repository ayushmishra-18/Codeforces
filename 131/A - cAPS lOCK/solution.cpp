//A. cAPS lOCK
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
change in two  cases :
if all are uppercase then tolower
if only first element is lowercase then first toupper and remaining tolower
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    string s;
    cin>>s;
    int n=s.size();
    int t=0;
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            t+=1;
        }
    }
    if(t==n){
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else if(t==(n-1) && islower(s[0])){
        s[0]=toupper(s[0]);
        for(int i=1;i<n;i++){
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else{
        cout<<s;
    }
    return 0;
}