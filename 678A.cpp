#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	long int n,k,res,big;
	cin>>n>>k;
	res=n/k;
	big=(res+1)*k;
	cout<<big<<endl;
	return 0;
}
