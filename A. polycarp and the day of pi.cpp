#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define endl "\n"

void solve(){
    string n;  cin>>n;

    string s="314159265358979323846264338327";  //3.14159265359
    ll cnt=0;
    for(ll i=0; i<n.size();i++){
        if(s[i]==n[i]) cnt++;
        else break;
    }
    cout<<cnt<<endl;


}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
