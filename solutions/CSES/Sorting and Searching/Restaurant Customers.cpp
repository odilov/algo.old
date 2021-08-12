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
 
const int N = 20*10e5+5;
 
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    //in; out;
 
    int n;
 
    cin >> n;
 
    vector< pi > v;
 
    FOR(i, 0, n){
        int a, b;
        cin >> a >> b;
        v.PB( MP ( a , 1 ) );
        v.PB( MP ( b, -1 ) );
    }
 
    sort( v.begin(), v.end() );
 
    int ans = 0, cnt = 0;
 
    for( auto x : v ){
        cnt += x.S;
        ans = max( ans , cnt );
    }
    cout << ans;
 
    return 0;
}

// https://cses.fi/problemset/task/1619/