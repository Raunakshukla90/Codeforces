#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        while(n--){
                
                string s;
                cin>>s;
                int a=s.length();
                if(a<11){
                        cout<<s;
                        
                }
               
               else {
                     cout << s[0] << a - 2 << s[a - 1];
   
                }
                cout << '
';
               
        }
        return 0;
}