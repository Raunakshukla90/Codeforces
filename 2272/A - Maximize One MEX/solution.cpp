#include <bits/stdc++.h>
using namespace std;
 
int solve(vector<int>& a, int k) {
    int n = a.size();
    vector<bool> seen(n + 1, false);
    vector<int> mexValues;
 
    int mex = 0;
 
    for (int i = 0; i < n; i++) {
        seen[a[i]] = true;
 
        while (seen[mex]) {
            mex++;
        }
 
        mexValues.push_back(mex);
    }
 
    sort(mexValues.rbegin(), mexValues.rend());
 
    return mexValues[k - 1];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int original = solve(a, k);
        int best = original;
 
        int x = -1, y = -1;
 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
 
                int current = solve(a, k);
 
                if (current > best) {
                    best = current;
                    x = i;
                    y = j;
                }
 
                swap(a[i], a[j]);
            }
        }
 
        if (x == -1) {
            cout << -1 << '
';
        } else {
            cout << x + 1 << " " << y + 1 << '
';
        }
    }
 
    return 0;
}