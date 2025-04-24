#include<bits/stdc++.h>
using namespace std;

#define opt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAXN = 1e7 + 50;
const int Mod = 1e9 + 7;
typedef long long ll;

int main(){
    opt

    int n;
    long long t;
    cin >> n >> t;
    vector<int> k(n);
    int minnum = MAXN;

    for( int i = 0 ; i < k.size() ; i++ ){
        cin >> k[i];
        minnum = min( minnum, k[i] );
    }

    ll l = 0;
    ll h = 1e18;
    //ll h = minnum * t;
    ll cnt = 0;
    
    while ( l <= h ) {
        ll mid = ( l + h ) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ( mid / k[i] );
            if ( sum >= t )  break;
        }

        if ( sum >= t ) {
            cnt = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << cnt << '\n';

}
