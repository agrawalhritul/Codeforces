//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
	string s; cin>> s;
	int prev= 0, maxDist= 0;
	for (int i= 0; i<s.length(); i++) {
		if (s[i]=='R') {
			maxDist= max(maxDist, i-prev+1);
			prev= i+1;
		}
	}
	if (prev== 0) maxDist= s.length()+1;
	else maxDist= max(maxDist, (int)s.length()-prev+1);
    cout<<maxDist<<endl;

    return;
 }

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);cout.tie(NULL);
    int test;
    cin>>test;
    for (int i= 0; i<test; i++) {
        //cout<<"Case #"<<i+1<<": ";
        solve();
    }   
    return 0;
}
