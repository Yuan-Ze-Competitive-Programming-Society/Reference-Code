#include <bits/stdc++.h>
using namespace std;

#define opt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int Mod = 1e9 + 7;
typedef long long ll;

ll ksm(ll base, ll power) {
    ll res = 1;
    base %= Mod;
    while (power > 0) {
        if (power & 1) {
            res = (res * base) % Mod;
        }
        
        base = (base * base) % Mod;
        power >>= 1;
    }
    return res;
}

int main() {
    opt
    ll n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        cout << ksm(a, b) << "\n";
    }
    return 0;
}

