#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n;
    cin >> n;
 
    int count = 0;
 
    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            count++;
        }
    }
 
    if (count == 4 || count == 7 ||
        count == 47 || count == 74) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}