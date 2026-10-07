#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int x0,y0,r;
                cin>>x0>>y0>>r;
                
                   bool found = false;
                for(int dx=-r;dx<r && !found;dx++){
                        for(int dy=-r;dy<r;dy++){
                                if(dx*dx+dy*dy==r*r){
                                        cout << x0 + dx << " " << y0 + dy << '
';
                                            found = true;
                                             break;
                                }
                        }
                }
               
        }
        return 0;
}