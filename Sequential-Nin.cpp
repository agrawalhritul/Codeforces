//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n; cin>> n;
    vector<int> arr(n);
    for (int i= 0; i<n; i++) cin>> arr[i];
    int idx= -1;
	for (int i= 0; i<n; i++) {
		if (arr[i]> 1) {
			idx= i;
			break;
		}
	}
	if (idx>= 0) {
		if (idx%2== 0) cout<<"First"<<endl;
		else cout<<"Second"<<endl;
	}
	else {
		if (n&1) cout<<"First"<<endl;
		else cout<<"Second"<<endl;
	}

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
