#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector <long long int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long int x;
        cin>>x;
        long long mn = *min_element(v.begin(), v.end());
        long long mx = *max_element(v.begin(), v.end());
        
        
        if (x >= mn && x <= mx){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
}