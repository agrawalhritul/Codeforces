//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n; cin>> n;
    vector<int> a(n), b(n);
    for (int i= 0; i< n; i++) cin>> a[i];
    for (int i= 0; i< n; i++) cin>> b[i];
    bool neg= false, pos= false, res= true;
	if (a.front()==1) pos= true;
	if (a.front()==-1) neg= true;
	if (a.front()!= b.front()) res= false;
	for (int i= 1; i<n and res== true; i++) {
		if (a[i]< b[i] and pos== false) {
			res= false;
			break;
		}
		if (a[i]> b[i] and neg== false) {
			res= false;
			break;
		}
		if (a[i]== 1) pos= true;
		else if (a[i]== -1) neg= true;
	}	
	if (res) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;


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
