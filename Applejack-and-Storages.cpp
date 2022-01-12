//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
	int n; cin>> n;
	vector<int> arr(100005, 0);
	int square= 0, rectangle= 0;
	for (int i= 0; i<n; i++) {
		int x; cin>> x;
		square-= arr[x]/4;
		rectangle-= arr[x]/2;
		arr[x]++;
		square+= arr[x]/4;
		rectangle+= arr[x]/2;
	}

	int q; cin>> q;
	char type; 
	while (q--) {
		int count= 0;
		cin>> type>> count;
		square-= arr[count]/4;
		rectangle-= arr[count]/2;
		if (type== '+') arr[count]++;
		else arr[count]--;
		square+= arr[count]/4;
		rectangle+= arr[count]/2;
		if (square>=1 and rectangle>= 4) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
