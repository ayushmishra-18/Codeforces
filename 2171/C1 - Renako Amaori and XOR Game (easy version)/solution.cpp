#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int x = 0;
        int y = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                x++;
                y = i + 1;
            }
        }
        if (x % 2 == 0) {
            cout << "Tie" << endl;
        }
        else {
            if (y % 2 != 0) {
                cout << "Ajisai" << endl;
            } else {
                cout << "Mai" << endl;
            }
        }
    }
}