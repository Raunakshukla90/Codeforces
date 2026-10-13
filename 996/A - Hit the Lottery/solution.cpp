#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int arr[]={100, 20, 10, 5, 1};
        int count=0;
        for(int a:arr){
                count+=n/a;
                n%=a;
        }
        cout<<count<<endl;
        return 0;
}