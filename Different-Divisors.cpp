//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int d, first= -1, second= -1; cin>> d;
    for (int i= 1+d; ; i++) {
    	bool found= true;
    	for (int j= 2; j*j<= i; j++) {
    		if (i%j== 0) {
    			found= false;
    			break;
    		}
    	}
    	if (found) {
    		first= i;
    		break;
    	}
    }

    for (int i= first+d; ; i++) {
    	bool found= true;
    	for (int j= 2; j*j<= i; j++) {
    		if (i%j== 0) {
    			found= false;
    			break;
    		}
    	}
    	if (found) {
    		second= i;
    		break;
    	}
    }

    cout<< min(1ll * first * second, 1ll* first* first* first)<<endl;

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
