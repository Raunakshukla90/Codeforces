#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
 
        int mx = max({x, y, z});
 
        if ((x == mx && y == mx) ||
            (x == mx && z == mx) ||
            (y == mx && z == mx)) {
 
            cout << "YES" << endl;
            cout << min({x, y, z}) << " "
                 << min({x, y, z}) << " "
                 << mx << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}