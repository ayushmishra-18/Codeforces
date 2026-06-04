#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int R, X, D, n;
        cin >> R >> X >> D >> n;
        string s;
        cin >> s;
        int a = 0;
        long long int l = R, h = R;
 
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '1') {
                a++;
                l = l - D;
                if (l < 0) {
                    l = 0;
                }
                h = h + D;
 
            }
            if (ch == '2') {
                if (l >= X) {
                    continue;
                }
                else {
                    a++;
                    l = l - D;
                    if (l < 0) {
                        l = 0;
                    }
                    h = h + D;
                    if (h >= X) {
                        h = X - 1;
                    }
 
                }
            }
        }
        cout << a << endl;
    }
}