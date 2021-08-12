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

    int n, m;

    cin >> n >> m;

    multiset <int> s;

    FOR(i, 0, n){
        int x;
        cin >> x;
        s.insert( -x );
    };

    while( m --> 0 ){
        int x;
        cin >> x;

        if( s.lower_bound( -x ) == s.end() )
            cout << -1 << '\n';
        else{
            cout << -(*s.lower_bound( -x )) << '\n';
            s.erase( s.lower_bound( -x ) );
        }
    }


    return 0;
}

// https://cses.fi/problemset/task/1091/