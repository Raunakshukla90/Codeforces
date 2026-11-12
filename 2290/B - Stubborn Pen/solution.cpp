#include<iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                string s;
                cin>>n>>s;
                char start='R';
                int res=0;
                for(int i=0;i<n;i++){
                        if(s[i]!=start){
                                res++;
                                start=s[i];
                        }
                
                start=(start=='R'?'B':'R');
                
        }
        cout<<res<<endl;
        }
        return 0;
}