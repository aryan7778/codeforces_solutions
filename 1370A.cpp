#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int gcdExtended(int a, int b, int *x, int *y)  
{  
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1);  
  
    
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
}  

int main(){
    fastIO
	int t;
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		//ans=0;
	/*	for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(i!=j){
				
			ans=max(ans,gcdExtended(i,j,&a,&b));
			}
		}*/
		//}
		ans=n/2;
		cout<<ans<<endl;
	}
	return 0;
}
