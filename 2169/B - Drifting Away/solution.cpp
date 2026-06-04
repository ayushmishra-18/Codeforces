#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int z = 0;
        bool infinite = false;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '>' && s[i + 1] == '<') {
                infinite = true;
                break;
            }
            if (s[i] == '*' && s[i + 1] == '<') {
                infinite = true;
                break;
            }
            if (s[i] == '>' && s[i + 1] == '*') {
                infinite = true;
                break;
            }
            if (s[i] == '*' && s[i + 1] == '*') {
                infinite = true;
                break;
            }
        }
 
        if (infinite) {
            cout << -1 << endl;
            z = 1;
        }
        if (z == 0) {
            int cleft = 0;
            for (int i = 0; i < n; ++i) {
                if (s[i] == '<' || s[i] == '*') {
                    cleft++;
                }
                else {
                    break;
                }
            }
 
            int cright = 0;
            for (int i = n - 1; i >= 0; --i) {
                if (s[i] == '>' || s[i] == '*') {
                    cright++;
                }
                else {
                    break;
                }
            }
 
            cout << max(cleft, cright) << endl;
        }
    }
 
}