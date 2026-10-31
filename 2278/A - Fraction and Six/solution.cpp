#include <bits/stdc++.h>
using namespace std;
void solve (){
        int n,m;
        cin>>n>>m;
        string p,q;
        cin>>p>>q;
        int cnt[26]={0};
        for(char c: p){
                cnt[c-'a']++;
                
        }
        for(char c:q){
                cnt[c-'a']--;
        }
        string target="six";
        for(char c:target){
                cnt[c-'a']--;
        }
        for(int i=0;i<26;i++){
                if(cnt[i]!=0){
                        cout<<"NO"<<endl;
                        return;
                }
        }
        cout<<"YES"<<endl;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}