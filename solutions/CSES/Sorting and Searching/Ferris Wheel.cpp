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

    int n, x;

    cin >> n >> x;

    vector <int> a(n);

    FOR(i, 0 , n) cin >> a[i];

    sort( a.rbegin(), a.rend() );

    int ans = 0, l = 0, r = n - 1;

    while( l <= r ){
        if( a[l++] + a[r] <= x ) --r;
        ++ans;
    }

    cout << ans;

    return 0;
}


// https://cses.fi/problemset/task/1090/