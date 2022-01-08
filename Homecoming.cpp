//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int bus, tram, amount;
    cin>> bus>> tram>> amount;
    string s; cin>> s;
    int i;
   	for (i= s.length()-2; i>=0; i--) {
   		if (s[i]== 'A') {
   			if (amount< bus) break;
   			amount-= bus;
   			while (s[i]== 'A') i--;
   			i++;
   		}
   		else if (s[i]== 'B') {
   			if (amount< tram) break;
   			amount-= tram;
   			while (s[i]== 'B') i--;
   			i++;
   		}
   	}

   	cout<<i+2<<endl;
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
