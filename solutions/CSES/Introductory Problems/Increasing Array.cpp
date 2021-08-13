#include <bits/stdc++.h>

#define in freopen( "in.txt", "r", stdin )
#define out freopen( "out.txt", "w", stdout )
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR( i, l, r ) for( int i = l; i < r; ++i )

using namespace std;

using ll = long long;
using ld = long double;

typedef vector <int> vi;
typedef vector <long long> vll;
typedef pair <int, int> pi;


int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    //in; out;

    int n;
    cin >> n;

    ll ans = 0;

    vll a(n);
    FOR(i, 0, n ) cin >> a[i];

    FOR(i, 1, n){
        if( a[i] < a[i - 1] ) ans += a[i - 1] - a[i] , a[i] = a[i - 1];
    }

    cout << ans;

    return 0;
}

// https://cses.fi/problemset/task/1094/