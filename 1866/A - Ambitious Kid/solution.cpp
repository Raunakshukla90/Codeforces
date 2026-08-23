#include <bits/stdc++.h>
using namespace std;
int main(){
       long long n;
       cin>>n;
       long long arr[n];
       for(int i=0;i<n;i++){
               cin>>arr[i];
       }
       long long minimum_operation=INT_MAX;
       
       for(int i=0;i<n;i++){
               
              minimum_operation=min(minimum_operation,abs(arr[i]));
             
       }
      cout<<  minimum_operation<<endl;
      return 0;
}