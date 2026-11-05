#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int l,r;
                cin>>l>>r;
                int s=r-l+1;
                int result;
                int ans=0;
                if(l>0 || r<0){
                        ans=s-1;
                }
                else{
                        int p=min(-l,r);
                        ans=max(0,s-2*p-2);
                }
                cout<<ans<<endl;
                
                
        }
        return 0;
}