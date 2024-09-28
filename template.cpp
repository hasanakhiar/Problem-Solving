#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using str = string;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define endl "\n"

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T, typename S> constexpr T ifloor(const T a, const S b) { return a/b - (a%b && (a^b) < 0); }
template<typename T, typename S> constexpr T iceil(const T a, const S b) { return ifloor(a + b - 1, b); }

#ifndef ONLINE_JUDGE
#include "dibugg.h" 
#else
#define debug(x...)
#endif

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1, tc = 1;
    // cin >> t;
    while (t--) {
        
    }
    return 0;
}