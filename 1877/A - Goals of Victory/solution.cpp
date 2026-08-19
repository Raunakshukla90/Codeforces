#include<iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                long long a[n];
                for(int i=0;i<n-1;i++){//user input of effiency
                        cin>>a[i];
                }
                
                //Answer is negative of sum of all the efficiency
                long long sum=0;
                for(int i=0;i<n-1;i++){
                        sum+=a[i];
                }
                sum=-1*sum;//negative of sum
               cout<<sum<<endl;
        }
        return 0;
}