#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int a = arr[0], y = -1;
        int p = 0, q = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == a) {
                p++;
            }
            else {
                if (y == -1) {
                    y = arr[i];
                    
                }
                if(arr[i]==y){
                    q++;
                }
                else {
                    y = -2;
                    break;
                }
            }
        }
        if (y == -1) {
            cout << "YES" << endl;
        }
        else if (y == -2) {
            cout << "No" << endl;
        }
        else if (abs(p - q) <= 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}