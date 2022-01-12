//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int m, n; cin>> m>> n;
    int count= 0;
    char x;
    for (int i= 0; i< m; i++) {
    	for (int j= 0; j< n; j++) {
    		cin>> x;
    		if (i!= m-1 and j== n-1 and x!= 'D') count++;
    		if (i== m-1 and j!= n-1 and x!= 'R') count++;
    	}
    }
     
    cout<< count<< endl;

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
