#include <bits/stdc++.h>
using namespace std;
void solution(){
        int x,y,z;
        cin>>x>>y>>z;
        string ans;
        if(y>=z){
                ans=string(x+y+z,'R');
        }
        else if(z>=x){
                ans=string(x+y+z,'S');
        }
        else{
                ans=string(x+y+z,'P');
        }
        cout<<ans<<endl;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                solution();
        }
        return 0;
}