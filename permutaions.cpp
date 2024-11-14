#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

	ll n;
	cin>>n;

	if(n==2 || n==3){
		cout<<"NO SOLUTION"<<endl;
	}
	else{
		ll arr[n];
		ll curr=2;
		ll i=0;
		for(i;i<n && curr<=n ;i++){
			arr[i]=curr;
			curr+=2;
		}

		curr=1;
		for(i;i<n && curr<=n ;i++){
			arr[i]=curr;
			curr+=2;
		}

		for(ll i: arr){
			cout<<i<<" ";
		}
		cout<<endl;
	}

	return 0;
}