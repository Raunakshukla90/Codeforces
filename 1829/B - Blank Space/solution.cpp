#include<iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                
                cin>>n;
                
                int arr[n];
                for(int i=0;i<n;i++){
                        cin>>arr[i];
                }
                long long len=0;
                long long maxlen=0;
                for(int i=0;i<n;i++){
                        if(arr[i]==0){
                                len=len+1;
                                maxlen=max(maxlen,len);
                        }
                        else{
                                len=0;
                        }
                }
                cout<<maxlen<<endl;
            
        }
            return 0;
}