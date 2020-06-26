#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=0,b=0;
		int steps;
		for(char ch : s){
			if(ch=='0')
			a++;
			else
			b++;
		}
		steps=min(a,b);
		if(steps%2==0){
			cout<<"NET"<<endl;
		}
		else{
			cout<<"DA"<<endl;
		}	
		
	}
	return 0;
}
