//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n; cin>> n;
    int last= 0;
    if (n%4== 0) last= n/4;
    else last= n/4 + 1;
   	for (int i= 0; i<n-last; i++) cout<<"9";
   	for (int i= 0; i<last; i++) cout<<"8";
   	cout<<endl;

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
