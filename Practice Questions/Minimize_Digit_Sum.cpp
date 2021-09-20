#include<bits/stdc++.h>
#define lli long long
using namespace std;
int digitSum(int n,int base){
    int sum=0;
    while(n!=0){
        sum+=n%base;
        n=n/base;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int min =digitSum(n,l);
        for(int i=l+1;i<=r;i++){
            int temp=digitSum(n,i);
            l=min>temp?i:l;
            min=min>temp?temp:min;
        }
        cout<<l<<endl;
    }
    return 0;
}