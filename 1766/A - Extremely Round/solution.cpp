//A. Extremely Round
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin>>n;
        int m=n.length();
        int a=n[0]-'0';
        cout<<9*(m-1)+a<<endl;
    }
}