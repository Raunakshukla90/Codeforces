#include<iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int x,y,r;
                cin>>x>>y>>r;
                if(x+1==y && y+1==r) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                
        }
        return 0;
}