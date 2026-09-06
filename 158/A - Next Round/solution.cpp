#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    for (int &x : a) cin >> x;
 
    int kthScore = a[k - 1];
    int ans = 0;
 
    for (int x : a) {
        if (x >= kthScore && x > 0) {
            ans++;
        }
    }
 
    cout << ans << '
';
 
    return 0;
}