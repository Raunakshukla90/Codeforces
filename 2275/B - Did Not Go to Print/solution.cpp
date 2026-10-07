#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        vector<int> st;
        vector<bool> printed(n + 1, false);
 
        for (int i = 1; i <= n; i++) {
 
            if (s[i - 1] == '1') {
                st.push_back(i);
            }
 
            else if (s[i - 1] == '2') {
                if (!st.empty()) {
                    int doc = st.back();
                    st.pop_back();
                    printed[doc] = true;
                } else {
                    printed[i] = true;
                }
            }
 
            else { // '3'
                printed[i] = true;
            }
        }
 
        vector<int> ans;
 
        for (int i = 1; i <= n; i++) {
            if (!printed[i]) {
                ans.push_back(i);
            }
        }
 
        cout << ans.size() << '
';
 
        for (int x : ans) {
            cout << x << ' ';
        }
        cout << '
';
    }
 
    return 0;
}