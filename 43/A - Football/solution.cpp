#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s, team1, team2;
    int count1 = 0, count2 = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> s;
 
        if (team1.empty() || s == team1) {
            team1 = s;
            count1++;
        } else {
            team2 = s;
            count2++;
        }
    }
 
    if (count1 > count2)
        cout << team1;
    else
        cout << team2;
 
    return 0;
}