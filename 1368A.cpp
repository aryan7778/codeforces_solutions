#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastIO
    int t;
    cin>>t;
    while (t--){
    long int a,b,n;
    cin>>a>>b>>n;
    long int ans=0;
    while(max(a,b)<=n){
      if(a>b){
        b+=a;
      }
      else{
        a+=b;
      }
      ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
