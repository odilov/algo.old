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

bool isVowel( char c ){
    return ( 0x208222 >> ( c & 0x1f ) ) & 1;
}

void ProcessCase(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <char> c;
    vector <int> j;

    for(int i = 0; i < n; ++i){
        if( s[i] != 'F' )
            c.push_back( s[i] ) , j.push_back( i );
    }

    int ans = 0;

    if( c.size() > 0 ){
        for(int i = 0; i < c.size() - 1; i++){
        if( c[i] != c[i + 1] )
            ans = ( ans + ( j[i] + 1 ) * ( n - j[i + 1] ) ) % 1000000007;
        }
    }

    cout << ans << '\n';
}

int main(){
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    in; out;
    int t;
    cin >> t;

    for(int i = 1; i <= t; ++i ){
        printf( "Case #%d: ", i );
        ProcessCase();
    }

    return 0;
}

