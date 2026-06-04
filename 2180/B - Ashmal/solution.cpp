#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s = a[0];
        for (int i = 1; i < n; ++i) {
            string pre = a[i] + s;
            string post = s + a[i];
            if (pre < post) {
                s = pre;
            } 
            else {
                s = post;
            }
        }
        cout << s << endl;
    }
}